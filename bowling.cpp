int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (i < 9 ? strikeBonus(s.substr(i+1)) : 0);
        } else if (s[i] == '/') {
            int nextRoll = stoi(s.substr(i+1, 2));
            score += (i < 9 ? roll1 + roll2 : 10) + (nextRoll - 1);
            i++;
        } else {
            roll1 = (s[i] - '0');
            if (i < 8 && s[i+1] != '/') {
                roll2 = (s[i+1] - '0');
                i++;
            } else {
                roll2 = 10 - roll1;
            }
            score += roll1 + roll2;
        }
    }
    return score;
}

int strikeBonus(string s) {
    int bonus = 0;
    for (char c : s) {
        if (c == 'X') {
            bonus += 10;
        } else if (c != '/') {
            bonus += (c - '0');
        }
    }
    return bonus;
}