int bowlingScore(std::string input) {
    int score = 0;
    for(int i = 0; i < input.length(); i++) {
        if(input[i] == 'X') { 
            score += 10;
            if(i < input.length() - 1 && input[i+1] == '/') { 
                score += 10;
                i++; 
            } else if(i < input.length() - 1) {
                roll = input[i+1] - '0';
                score += 10 + roll;
                i++; 
            }
        } else if(input[i] == '/') { 
            score += 10 - (input[i+1] - '0' + input[i+2] - '0');
            i+=2; 
        } else {
            int roll = input[i] - '0';
            if(i < input.length() - 1) {
                if(input[i+1] == '/') { 
                    score += roll;
                    i++; 
                } else {
                    int nextRoll = input[i+1] - '0';
                    score += roll + nextRoll;
                    i++; 
                }
            } else {
                score += roll;
            }
        }
    }
    return score;
}