int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentFrame++;
        } else if (c == '/') {
            score += 10 - (stoi(s.substr(0, s.find('/'))) + stoi(s.substr(s.find('/') + 1, 1)) - 10);
            currentFrame++;
        } else {
            int points = c - '0';
            if (currentFrame < 10) {
                score += points;
            }
            if (c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9') {
                currentFrame++;
            }
        }
    }
    return score;
}