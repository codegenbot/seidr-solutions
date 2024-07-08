int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            int strikeCount = 1;
            while (i + 2 <= s.length() && s.substr(i, 3) != "XXX") {
                strikeCount++;
                i += 3;
            }
            for (int j = 0; j < strikeCount; j++) {
                score += 10;
            }
        } else if (isdigit(s[i])) {
            int count = 0;
            while (i + 1 <= s.length() && isdigit(s[i+1])) {
                count++;
                i++;
            }
            score += count * 10;
            i++;
        } else {
            i++;
        }
    }
    
    return score;
}