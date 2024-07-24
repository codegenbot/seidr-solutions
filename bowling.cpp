int bowling(string s) {
    int score = 0;
    int current_frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            current_frame--;
        } else if (c == '/') {
            score += 10 + (10 - (current_frame == 9 ? 2 : 1));
            current_frame = min(current_frame, 9);
        } else {
            int pins = c - '0';
            if (current_frame == 10) {
                score += pins;
            } else {
                score += pins;
                if (pins < 10) {
                    current_frame++;
                }
            }
        }
    }
    return score;
}