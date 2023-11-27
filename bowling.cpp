int calculateScore(std::string input) {
    int score = 0;
    int frame = 0;
    bool isSpare = false;
    bool isStrike = false;

    for (char ch : input) {
        if (ch == 'X') {
            score += 10;
            
            if (frame < 9) {
                score += 10;
                
                if (input[frame + 1] == 'X') {
                    score += 10;
                } else {
                    score += input[frame + 1] - '0';
                }
            }
            
            isStrike = true;
        } else if (ch == '/') {
            score += 10 - (input[frame - 1] - '0');
            
            if (frame < 9) {
                if (input[frame + 1] == 'X') {
                    score += 10;
                } else {
                    score += input[frame + 1] - '0';
                }
            }
            
            isSpare = true;
        } else if (ch == '-') {
            // No need to handle '-' separately
        } else {
            score += ch - '0';
        }

        if (isSpare) {
            score += ch - '0';
            isSpare = false;
        }
        
        if (isStrike && input[frame] != 'X') {
            score += ch - '0';
            isStrike = false;
        }

        frame += (ch != '-');
    }

    return score;
}