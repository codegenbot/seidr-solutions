int bowlingScore(std::string s) {
    int score = 0;
    int roll1 = 0; 
    int roll2 = 0; 

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += (10 - roll1) * 2;
            if (roll2 != 0) {
                score += roll2;
            }
            break;
        } else {
            int val = c - '0';
            if (roll1 == 0) {
                roll1 = val;
            } else {
                if (roll1 + val >= 10) {
                    score += 10;
                    if (roll2 != 0) {
                        score += roll2;
                    }
                    roll1 = 0;
                    roll2 = 0;
                } else {
                    roll1 = 0;
                    roll2 = val;
                }
            }
        }
    }
    return score; 
}