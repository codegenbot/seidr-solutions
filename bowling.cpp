int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == '/') {
            if (s[frame-1] == 'X') {
                score += 10 + getBonus(c);
            } else {
                score += getScore(c);
            }
            frame++;
        } else if (isdigit(c)) {
            int strike = 0;
            for (; c && c != '/'; c++) {
                strike *= 10;
                strike += c - '0';
            }
            if (strike == 10) {
                score += 10 + getBonus(s[frame]);
            } else {
                score += strike;
            }
            frame++;
        }
    }
    return score;
}

int getScore(char c) {
    return c - '0' * 2 + 5;
}

int getBonus(char c) {
    if (c == 'X') {
        return 10;
    } else {
        return c - '0';
    }
}