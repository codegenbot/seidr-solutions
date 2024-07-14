int bowlingScore(string s) {
    int score = 0;
    for(int i=0; i<10; i++){
        if(s[i] == 'X'){
            score += 30;
        }else if(s[i+1] == '/'){
            int firstPin = s[i] - '0';
            int secondPin = s[i+2] - '0';
            score += firstPin + secondPin;
        }else{
            int pins = 0;
            for(int j=i; j<i+3; j++){
                pins *= 10;
                pins += s[j] - '0';
            }
            score += pins;
        }
    }
    return score;
}