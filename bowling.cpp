int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;
    int currentRoll = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i] == 'X' || (i+1 < s.length() && (s[i+1] == '/' || s[i+1] == 'X'))){
            score += 10 + (currentRoll > 0 ? currentRoll : 10);
            currentRoll = 0;
        } else if(s[i] == '/'){
            score += 10 - currentRoll;
            currentRoll = 0;
        } else {
            currentRoll++;
        }
    }

    return score;
}