using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            string firstRoll = s.substr(0, i);
            string secondRoll = s.substr(i + 1);
            int first = stoi(firstRoll);
            int second = stoi(secondRoll);
            score += getPointsForFrame(first, second);
            currentFrame++;
        }
    }
    return score;
}

int getPointsForFrame(int first, int second) {
    if (first == 10) {
        return 10 + second;
    } else if (first + second >= 10) {
        return 10 + (second - 10);
    } else {
        return first + second;
    }
}