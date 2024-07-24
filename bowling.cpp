int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            score += min(stoi(s.substr(0, i)), 10);
            currentFrame++;
            s = s.substr(i + 1);
            i--;
        }
    }
    int remainingFrames = max(0, 10 - currentFrame);
    for (int i = 0; i < remainingFrames; i++) {
        if (s[i] == 'X') {
            score += 10;
            currentFrame++;
        } else if (s[i] == '/') {
            score += min(stoi(s.substr(0, i)), 10) + stoi(s.substr(i + 1));
            currentFrame++;
            s = "";
        } else {
            int strikeOrSpare = 0;
            for (int j = i; j < s.length(); j++) {
                if (s[j] == 'X') {
                    score += 10;
                    strikeOrSpare = 2;
                    break;
                } else if (s[j] == '/') {
                    score += min(stoi(s.substr(0, j)), 10) + stoi(s.substr(j + 1));
                    strikeOrSpare = 1;
                    break;
                }
            }
            i += strikeOrSpare - 1;
        }
    }
    return score;
}