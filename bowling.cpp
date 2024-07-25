int bowlingScore(string str) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (str[i] == 'X') { // strike
            score += 10 + getExtra(str, i);
        } else if (str[i] == '/') { // spare
            int bonus = 10 - str[i+1]-'0'-'0';
            score += 10 + bonus;
            i++;
        } else {
            int framescore = str[i] - '0' * 2 + str[i+1] - '0';
            score += framescore;
            if (framescore < 10) {
                int extra = getExtra(str, i);
                score += extra;
            }
        }
    }
    return score;
}

int getExtra(string str, int start) {
    int sum = 0;
    for (int i = start+2; i <= 17; ++i) {
        if (str[i] == 'X' || str[i] == '/') break;
        sum += str[i] - '0';
    }
    return sum;
}