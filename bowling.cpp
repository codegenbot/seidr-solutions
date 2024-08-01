int bowling(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 + (frame < 9 ? bowling_to_ten(frame) : 0);
            frame++;
        } else {
            int pins = c - '0';
            score += pins;
            if (pins < 10) {
                frame++;
            }
        }
    }
    return score;
}

int bowling_to_ten(int i) {
    if (i == 9)
        return 10;
    else
        return 10 - i;
}