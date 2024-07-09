int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'X') {
            score += 10 + (i < s.length()-1 && s[i+1] != '/') ? 10 : 0;
            frame++;
        } else if(s[i] == '/') {
            int temp = 10 - (s[i-1] - '0' + s[i+1] - '0');
            score += temp + 10;
            frame++;
        } else {
            int points = s[i] - '0';
            score += points;
            if(s[i+1] == '/') {
                frame++;
            }
        }
    }
    
    return score;
}