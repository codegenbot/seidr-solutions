using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int rollsSoFar = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + currentRoll;
            currentRoll = 0;
            rollsSoFar++;
        } else if (c == '/') {
            score += 10 - currentRoll;
            currentRoll = 0;
            rollsSoFar++;
        } else {
            currentRoll += c - '0';
            if (rollsSoFar >= 9) {
                if (currentRoll + s[2*s.length() - c - 1] - '0' < 10) {
                    score += 10;
                } else {
                    score += currentRoll + s[2*s.length() - c - 1] - '0';
                }
            }
        }
    }

    return score;