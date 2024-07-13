int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '/') {
            int pins = s[i] - '0';
            if (frame == 10) {
                score += pins;
                break;
            }
            if (pins == 10) {
                score += 10 + 10;
                frame++;
            } else {
                score += pins;
                frame++;
            }
        } else {
            i++;
            int firstPins = s[i - 1] - '0';
            int secondPins = s[i] - '0';
            if (firstPins + secondPins == 10) {
                score += 10 + secondPins;
                frame++;
            } else {
                score += firstPins + secondPins;
                frame++;
            }
        }
    }
    return score;
}