int bowling(string s) {
    int score = 0;
    for(int i=0; i<10; i++) {
        if(s[i] == 'X') { // Strike
            score += 10 + (i < 8 ? getBonus(s, i+1) : 0);
        } else if(s[i] == '/') { // Spare
            score += 10;
            int bonus = getBonus(s, i+2);
            score += bonus;
            if(i < 8) {
                score += getBonus(s, i+3);
            }
        } else { // Normal roll
            int firstRoll = s[i] - '0';
            int secondRoll = (s[i+1] == '/') ? 10 : (s[i+1] - '0');
            score += firstRoll + secondRoll;
        }
    }
    return score;
}

int getBonus(string s, int i) {
    if(s[i] == 'X') return 10;
    if(s[i] == '/') return 10 - (s[i-1] - '0' + s[i-2] - '0');
    return s[i] - '0';
}