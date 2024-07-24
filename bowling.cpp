int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            score += min(stoi(s.substr(0, i)), 10);
            currentFrame++;
            s = s.substr(i + 1);
            i = -1;
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            score += min(stoi(s.substr(0, i)), 10) + stoi(s.substr(i + 1));
            currentFrame++;
            return score;
        }
    }
    int firstRoll = stoi(s);
    if (firstRoll == 10) {
        score += firstRoll;
        s = s.substr(2);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '/') {
                score += min(stoi(s.substr(0, i)), 10);
                currentFrame++;
                return score;
            }
        }
    } else {
        score += firstRoll + stoi(s.substr(1));
        return score;
    }
}