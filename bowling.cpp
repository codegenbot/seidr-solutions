int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int currentFrame = 0;
            while (i < s.length() && (s[i] != '/' || currentFrame < 10)) {
                if (s[i] == '/') {
                    score += (currentFrame == 9) ? 10 : stoi(string(1, s[i-1])) + 10 - currentFrame;
                    break;
                } else {
                    score += (currentFrame == 10) ? stoi(s.substr(i, 2)) : stoi(string(1, s[i])) + 10 - currentFrame;
                }
                i++;
                if (s[i] != '/') {
                    currentFrame++;
                }
            }
        }
    }
    return score;
}