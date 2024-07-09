int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'X') {
            score += 10 + (i < s.length() - 2 ? 
                (s[i+1] == '/' ? 10 : stoi(string(1, s[i+1]))) * 10 : 0);
            frame++;
        } else if(s[i] == '/') {
            int strike = i;
            score += 10 + ((strike < s.length() - 2) ? 
                (s[strike+1] == 'X' ? 10 : stoi(string(1, s[strike+1]))) * 10 : 0);
            frame++;
        } else {
            int rolls = 0;
            while(i < s.length() && s[i] != '/' && s[i] != 'X') {
                rolls++;
                i++;
            }
            if(rolls == 2) score += (s[strike] - '0') + (s[strike+1] - '0');
            else score += (s[strike] - '0') * 10;
            frame++;
        }
    }
    return score;
}