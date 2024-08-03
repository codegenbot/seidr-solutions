int bowlingScore(string s) {
    int score = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'X') {
            score += 30;
            i++;
            if(i < s.length() && (s[i] == '/' || i == s.length()-1)) {
                score++;
            }
        } else if(s[i] == '/') {
            int prev = i-1 > -1 ? (s[i-1] == 'X' ? 30 : (s[i-1]-48)*2) : 0;
            score += 10 + prev;
        } else {
            score += s[i] - 48;
        }
    }
    return score;
}