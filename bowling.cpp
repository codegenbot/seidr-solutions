int bowlingScore(string str) {
    int score = 0;
    int roll = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '/') {
            score += (10 - roll);
            roll = 0;
        }
        else if(isdigit(str[i])){
            roll = roll * 10 + (str[i] - '0');
        }
    }
    return score;
}