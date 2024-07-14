Here is the solution:

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (5 - roll);
            }
            roll = 0;
        } else if (c == 'X') {
            score += 30;
            roll = 0;
        } else {
            int points = c - '0';
            if (roll == 1) {
                if (points + 10 > 10) {
                    score += 10;
                } else {
                    score += points + 10;
                }
            } else {
                score += points;
            }
            roll++;
        }
    }
    return score;