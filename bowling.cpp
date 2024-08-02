int bowlingScore(string input) {
    int score = 0;
    int roll1, roll2;
    for(int i = 0; i < 10; i++) {
        if(input[i] == 'X') { // strike
            score += 10 + bowlingScoreHelper(&input[i+1]);
        } else if(input[i] != '/') { // spare
            roll1 = input[i] - '0';
            if(i < 8) {
                if(input[i+2] == 'X' || (input[i+1] == '/')) { // next roll is strike or part of a spare
                    score += roll1 + 10;
                } else {
                    roll2 = input[i+1] - '0';
                    score += roll1 + roll2;
                }
            } else {
                score += roll1 + 10;
            }
        } else { // regular rolls
            roll1 = input[i-1] - '0';
            if(i < 8) {
                roll2 = input[i+1] - '0';
                score += roll1 + roll2;
            } else {
                score += roll1 + 10;
            }
        }
    }
    return score;
}

int bowlingScoreHelper(string* input) {
    int score = 0;
    for(int i = 0; i < 2 && i < (*input).size(); i++) {
        if((*input)[i] == 'X') { // strike
            score += 10 + bowlingScoreHelper(&(*input)[i+1]);
            return score;
        } else if((*input)[i] != '/') { // spare
            int roll1 = (*input)[i] - '0';
            int roll2 = (*input)[i+1] - '0';
            score += roll1 + roll2;
            return score;
        }
    }
    return 0;
}