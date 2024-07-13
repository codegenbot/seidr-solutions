int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            score += min(stoi(s.substr(i - 1, 1)) + stoi(s.substr(i + 1, 1)), 10);
            currentFrame++;
        } else if (currentFrame <= 9) {
            int pins = stoi(s.substr(i, 1));
            if (pins == 10) {
                score += 10;
                currentFrame++;
            } else {
                score += pins;
                if (i < s.length() - 1 && s[i + 1] != '/') {
                    i++; // skip the next character
                    if (stoi(s.substr(i, 1)) + stoi(s.substr(i + 1, 1)) == 10) {
                        score += 10;
                        currentFrame++;
                    } else {
                        score += min(stoi(s.substr(i - 1, 1)) + stoi(s.substr(i, 1)), 10);
                        currentFrame++;
                    }
                }
            }
        }
    }
    return score;
}