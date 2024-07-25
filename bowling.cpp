int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for(int frame = 1; frame <= 10; frame++) {
        if(s[2*frame-2] == '/') {
            roll1 = 10 - (s[2*frame-1] - '0');
            roll2 = s[2*frame] - '0';
        } else {
            roll1 = s[2*frame-1] - '0';
            if(s[2*frame] == 'X') {
                roll2 = 10;
            } else {
                roll2 = s[2*frame] - '0';
            }
        }

        if(roll1 + roll2 >= 10) {
            score += 10 + (s.length() > 2*frame+1 && s[2*frame+1] == 'X' ? 10 : s[2*frame+1] - '0');
        } else {
            score += roll1 + roll2;
        }
    }

    return score;
}