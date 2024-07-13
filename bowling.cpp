int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            score += min(stoi(s.substr(i - 2, 2)), 10);
            currentFrame++;
        } else if (i == s.length() - 1) {
            score += stoi(s.substr(i));
        } else if (isdigit(s[i])) {
            int strike = 0;
            for (; i < s.length() && isdigit(s[i]); i++) {
                strike++;
            }
            if (strike == 2) {
                score += 10 + currentFrame * 10;
                currentFrame++;
            } else {
                score += strike + currentFrame * 10;
            }
        }
    }
    return score;
}