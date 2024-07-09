int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int frame = 1;

    for (char c : s) {
        if (c == 'X') { // strike
            score += 10 + 10 + 10;
            currentRolls = 2;
        } else if (c == '/') { // spare
            score += 10 + 10 - currentRolls;
            currentRolls = 1;
            frame++;
        } else if (isdigit(c)) {
            int points = c - '0';
            currentRolls++;

            if (currentRolls < 2) {
                score += points;
            } else { // last two rolls of the game
                if (frame == 10 && currentRolls == 2) {
                    score += points + 10;
                } else {
                    score += points;
                }
            }

            if (currentRolls >= 2) {
                frame++;
                currentRolls = 0;
            }
        }
    }

    return score;
}