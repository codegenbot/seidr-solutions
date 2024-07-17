int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 30;
            frame++;
        } else if (isdigit(s[i])) {
            int pins = 0;
            if (i + 1 < s.size() && isdigit(s[i+1]))
                pins = 10 - (s[i] - '0');
            else
                pins = s[i] - '0';
            
            if (frame < 9) {
                score += pins;
                frame++;
            } else {
                if (i + 2 < s.size() && s[i+1] == '/') {
                    i++;
                    continue;
                }
                score += pins;
            }
        } else if (s[i] == '/') {
            int first = s[i-1] - '0';
            int second = 10 - first;
            
            if (i + 2 < s.size() && s[i+1] == 'X') {
                score += 30;
                frame++;
            } else
                score += first * 10 + second;
        }
    }
    
    return score;
}