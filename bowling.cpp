using namespace std;

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += 10 + (stoi(s.substr(i+1, 2)) - 5);
        } else {
            int currentFrameScore = s[i] - '0';
            if (currentFrameScore < 10) {
                score += currentFrameScore;
            } else {
                score += 10 + (s[i+1] - '0');
            }
        }
    }
    return score;
}