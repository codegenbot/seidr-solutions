int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == 'X') {
            score += 10 + (i<18 ? bowlingStrike(frame) : 0);
            frame++;
        } else if(s[i] == '/') {
            score += 10 - bowlingKnockdown(i+1);
            frame++;
        } else {
            int knockdown = bowlingKnockdown(i+1);
            if(knockdown < 10) {
                score += knockdown;
                frame++;
            } else {
                score += knockdown;
                i++; // skip the second number
            }
        }
    }
    return score;
}

int bowlingStrike(int frame) {
    int score = 0;
    for(int i=frame; i<=3 && i<=9; i++) {
        if(i == frame) {
            score += 10;
        } else {
            score += bowlingKnockdown(frame);
        }
    }
    return score;
}

int bowlingKnockdown(int pin) {
    switch(pin) {
        case 1:
        case 2:
        case 3:
            return 0;
        case 4:
            return 4;
        case 5:
            return 5;
        case 6:
            return 6;
        case 7:
            return 7;
        case 8:
            return 8;
        case 9:
            return 9;
    }
}