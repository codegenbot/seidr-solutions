using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRoll = 0;
        } else if (c == '/') {
            if (currentRoll > 0)
                score += 10 + currentRoll;
            currentRoll = 0;
        } else {
            currentRoll = currentRoll * 10 + (c - '0') * 1;
        }
    }
    while (currentRoll < 10) {
        score += 10;
        currentRoll = 0;
    }
    return score;