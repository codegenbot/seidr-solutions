int bowlingScore(string str) {
    int score = 0;
    for(int i=0; i<10; i++) {
        if(str[i] == 'X') {
            score += 30;
        } else if(str[i] == '/') {
            score += 10 + (str[i+1] - '0');
            i++;
        } else {
            int temp = str[i] - '0';
            if(i < 8 && str[i+1] != '/') {
                temp += str[i+1] - '0';
                score += temp;
                i++;
            }
            score += temp;
        }
    }
    return score;
}