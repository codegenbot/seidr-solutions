int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            string first = s.substr(0, i);
            string second = s.substr(i + 1);
            int firstRoll = stoi(first);
            int secondRoll = stoi(second);
            if (firstRoll + secondRoll >= 10) {
                score += 10;
            } else {
                score += firstRoll + secondRoll;
            }
            currentFrame++;
        } else {
            string roll = s.substr(0, i + 1);
            int value = stoi(roll);
            if (value == 10) {
                score += 10;
                currentFrame++;
            } else {
                score += value;
                if (currentFrame < 10) {
                    score += bowlingRoll(s.substr(i + 1));
                    currentFrame++;
                }
            }
        }
    }
    return score;
}

int bowlingRoll(string s) {
    int i = 0;
    while (i < s.length() && s[i] != '/') {
        i++;
    }
    if (i == s.length()) {
        return stoi(s);
    } else {
        string first = s.substr(0, i);
        string second = s.substr(i + 1);
        int value = stoi(first) + stoi(second);
        return value;
    }
}