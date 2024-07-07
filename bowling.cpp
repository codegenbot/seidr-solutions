int bowlingScore(string s) {
    int score = 0;
    bool previousStrike = false;
    bool previousSpare = false;

    for (char c : s) {
        if (c == '/') {
            if (!previousSpare && !previousStrike) { 
                if (currentRoll >= 10) {
                    score += currentRoll + 10;
                } else {
                    score += currentRoll + max(1, currentRoll);
                }
                currentRoll = 0;
                previousSpare = false; 
                previousStrike = false; 
            } else if (previousSpare) { 
                score += currentRoll + 10;
                currentRoll = 0;
                previousSpare = false; 
            } else { 
                score += 10 + currentRoll;
                currentRoll = 0;
                previousStrike = true; 
            }
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        } else if (c == 'X') { 
            score += 10 + 10;
            previousSpare = false; 
            previousStrike = true; 
        } else if (c == '-') { // spare
            score += 10;
            currentRoll = 0;
            previousSpare = true; 
        }
    }

    return score;
}