using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (10 - (roll == 1));
            }
            roll = 0;
        } else if (c == 'X') {
            score += 10;
            roll = 0;
        } else {
            int val = c - '0';
            roll++;
            if (roll < 2) {
                score += val;
            } else {
                if (val + roll > 10) {
                    score += 10;
                } else {
                    score += val + roll;
                }
                roll = 0;
            }
        }
    }
    return score;