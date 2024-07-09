int bowlingScore(std::string input) {
    int score = 0;
    bool lastRoll = false;
    
    for (char c : input) {
        if (c == 'X') {
            score += 10;
            lastRoll = true;
        } else if (c == '/') {
            score += 10 - ((input[1] == 'X' || input[2] == 'X') ? 0 : (input[1] - '0' + input[2] - '0'));
            lastRoll = true;
        } else if (isdigit(c)) {
            int roll = c - '0';
            if (!lastRoll) {
                score += roll;
            } else {
                if (lastRoll) score += 10 - roll; 
                else score += roll + input[1] - '0'; 
            }
            lastRoll = !lastRoll;
        }
    }
    
    return score;
}