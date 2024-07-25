int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (currentFrame < 10 ? 10 : 0);
            currentFrame++;
        } else if (s[i] == '/') {
            int previousPin = stoi(s.substr(i - 1, 1));
            int currentPin = 10 - previousPin;
            score += previousPin + currentPin + (currentFrame < 9 ? 5 : 0);
            currentFrame++;
            i++; // skip the '/'
        } else if (isdigit(s[i])) {
            int pins = 0;
            for (; i < s.length() && isdigit(s[i]); i++) {
                pins = pins * 10 + stoi(string(1, s[i]));
            }
            if (pins == 10) {
                score += pins + (currentFrame < 9 ? 5 : 0);
                currentFrame++;
            } else {
                score += pins;
                if (currentFrame < 10) {
                    currentFrame++;
                }
            }
        }
    }
    return score;
}