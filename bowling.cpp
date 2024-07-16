int bowlingScore(const string& input) {
    int score = 0;
    int frames = 0;
    for (char c : input) {
        if (c == '/') {
            frames++;
        } else if (isdigit(c)) {
            int pins = c - '0';
            if (frames < 10) {
                if (pins == 10) {
                    score += 10 + bowlingScore(input.substr(frames * 2 + 1));
                    frames++;
                } else {
                    score += pins;
                    for (int i = 0; i < 3; i++) {
                        if (input[frames * 2 + i] >= '1' && input[frames * 2 + i] <= '9') {
                            score += input[frames * 2 + i] - '0';
                            frames++;
                            break;
                        }
                    }
                }
            } else {
                score += pins;
            }
        }
    }
    return score;
}