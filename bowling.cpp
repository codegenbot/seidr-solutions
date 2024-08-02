int bowling(string str) {
    int score = 0;
    int roll = 0;
    int frame = 0;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '/') {
            if(roll == 1 || str[i-1] == 'X') {
                score += 10 + ((str[i+1] - '0') * 10);
            } else {
                score += (str[i-1] - '0') * 10 + (str[i+1] - '0');
            }
            roll = 0;
            frame++;
        } else if(str[i] == 'X') {
            score += 10;
            roll = 1;
        } else {
            int temp = str[i] - '0';
            if(roll == 1) {
                if(temp + (str[i+1] - '0') >= 10) {
                    score += 10;
                    i++;
                } else {
                    score += temp + (str[i+1] - '0');
                }
                roll = 0;
                frame++;
            } else {
                score += temp;
                roll = 1;
            }
        }
    }

    return score;
}