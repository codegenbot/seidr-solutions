int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int currentFrame = s.substr(i, 2);
            if (currentFrame[0] == '5' && currentFrame[1] == '/') {
                score += 15;
                i++;
            } else {
                score += stoi(currentFrame) + (s[i+1] == '/' ? 10 : stoi(s.substr(i+1, 1)));
            }
        } else if (s[i] == '/') {
            score += 10;
        }
    }
    return score;
}