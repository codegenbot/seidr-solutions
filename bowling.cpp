int bowlingScore(string s) {
    int score = 0;
    int frameIndex = 0;
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '/') {
            if(i+2 <= s.length() && (s[i+1]-'0') * 10 + (s[i+2]-'0') == 10) {
                score += 10 + (frameIndex < 9 ? bowlingScore(&s[frameIndex+3]) : 0);
                frameIndex++;
            } else {
                int first = s[i-1]-'0';
                if(first > 1) {
                    score += 10;
                    frameIndex++;
                } else {
                    score += first * 10 + (s[i+1]-'0');
                    frameIndex++;
                }
            }
        } 
    }
    
    return score;
}