using namespace std;

int bowlingScore(string s) {
    int score = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10 - (count(s.begin(), s.end(), 'X') % 2 ? 1 : 5);
        } else {
            int count = c - '0';
            while (count--) {
                if (s.substr(1, s.find(' ') - 1) == "X") {
                    score += 30;
                    break;
                } else {
                    score += 10;
                }
            }
        }
    }
    return score;
}