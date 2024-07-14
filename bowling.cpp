int bowlingScore(string s) {
    int score = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'X') {
            score += 30;
            i++;
            if(i < s.length()) {
                if(s[i] == '/') {
                    score += 10;
                } else {
                    int num = s[i] - '0';
                    score += 10 + num;
                }
            }
        } else if(s[i] == '/') {
            score += 10;
            i++;
            if(i < s.length()) {
                int num = s[i] - '0';
                score += num;
            }
        } else {
            int num = s[i] - '0';
            score += num;
        }
    }
    return score;
}