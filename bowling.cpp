int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '/'){
            currentRolls = (i-1)/2+1;
            score += 10 - currentRolls;
            i++;
        }
        else if(s[i] == 'X' || s[i] == '-' ){
            currentRolls++;
            score += 10;
        }
        else{
            int val = s[i]-48; // subtract 48 to get the value of the digit
            currentRolls++;
            score += val;
        }
    }
    return score;
}