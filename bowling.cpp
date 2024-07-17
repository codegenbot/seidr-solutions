int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'X' || (s[i+1] == '/' && s[i] != '5')){
            score += 10 + (roll > 0 ? 10 : 0);
            roll = 0;
            i++;
        } else {
            int count = 0;
            while(i < s.length() && (s[i] >= '0' && s[i] <= '9')){
                count = count * 10 + (s[i] - '0');
                i++;
            }
            score += count;
            roll++;
        }
    }
    return score;
}