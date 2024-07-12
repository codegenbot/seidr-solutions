int bowling(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int rolls[21] = {0};
    
    for (char c : s) {
        if (c == 'X') {
            rolls[ball] = 10;
            rolls[ball + 1] = 0;
            ball += 2;
            frame++;
        } else if (c == '/') {
            rolls[ball] = 10 - rolls[ball - 1];
            ball++;
        } else if (c == '-') {
            rolls[ball] = 0;
            ball++;
        } else {
            rolls[ball] = c - '0';
            ball++;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        if (rolls[i * 2] == 10) {
            score += 10 + rolls[i * 2 + 2] + rolls[i * 2 + 3];
            if (rolls[(i + 1) * 2] == 10) {
                score += rolls[(i + 2) * 2];
            }
        } else {
            if (rolls[i * 2] + rolls[i * 2 + 1] == 10) {
                score += 10 + rolls[i * 2 + 2];
            } else {
                score += rolls[i * 2] + rolls[i * 2 + 1];
            }
        }
    }
    
    return score;
}