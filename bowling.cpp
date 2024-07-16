int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'X') {
            score += 10 + (currentFrame < 10 ? getBonus(currentFrame, s) : 0);
            currentFrame++;
        } else if(s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            score += firstRoll + secondRoll;
            currentFrame++;
        } else {
            int roll = s[i] - '0';
            score += roll;
            if(s[i+1] == 'X' || (i+2 < s.length() && s[i+2] == '/')) {
                currentFrame++;
            }
        }
    }
    return score;
}

int getBonus(int frame, string s) {
    int bonus = 0;
    for(int i=frame*2-1; i<s.length(); i++) {
        if(s[i] == 'X') {
            bonus += 10;
        } else if(s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            bonus += firstRoll + secondRoll;
            break;
        }
    }
    return bonus;
}