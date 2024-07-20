using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRoll = 0;
        } else if (c == '/') {
            score += 10 + currentRoll;
            currentRoll = 0;
        } else {
            int roll = (c - '0');
            if (currentRoll > 1) {
                score += currentRoll * 10 + roll;
            } else {
                currentRoll = roll;
            }
        }
    }
    return score;