int bowlingScore(string str) {
    int score = 0;
    for(int i=0; i<10; i++) {
        if(str[i] == 'X') {
            score += 30;
        } else if(str[i] == '/') {
            score += (str[i-1]-'0')*10 + (str[i+1]-'0');
            if(i < 8) {
                score += min((str[i+2]-'0'),(str[i+3]-'0'));
            }
        } else {
            score += (str[i]-'0')*10;
            if(i < 8) {
                score += min((str[i+1]-'0'),(str[i+2]-'0'));
            }
        }
    }
    return score;
}