int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            score += min(stoi(s.substr(i-2, 2)), 10);
            currentFrame++;
        } else if (i == s.length() - 1) {
            score += stoi(s.substr(i));
        } else {
            int strike = 0;
            for (int j = i; j < s.length(); j++) {
                if (s[j] != '/') {
                    strike++;
                } else {
                    break;
                }
            }
            if (strike == 2) {
                score += 10 + strike * 10;
                currentFrame++;
            } else {
                score += 10 + stoi(s.substr(i, strike));
            }
        }
    }
    return score;
}