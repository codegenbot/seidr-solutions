int bowlingScore(string s) {
    int score = 0;
    bool inFrame = false;
    int frame = 0;

    for (char c : s) {
        if (c == '/') {
            inFrame = true;
        } else if (c == 'X') {
            score += 10 + 10;
            frame++;
            inFrame = false;
        } else if (c == '-') {
            score += 10;
            frame++;
            inFrame = false;
        } else if (isdigit(c)) {
            int strikeOrSpare = c - '0';
            if (inFrame) {
                if (strikeOrSpare > 1) return 0;
                score += strikeOrSpare;
            } else {
                score += strikeOrSpare + 10;
            }
            frame++;
        }
    }

    return score;
}