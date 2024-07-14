int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (currentFrame <= 9 && s[i-1] != 'X') {
                string frameStr = s.substr(i-2,3);
                int nonStrikePoints = stoi(frameStr);
                score += nonStrikePoints;
                currentFrame++;
            } else {
                score += 10;
                currentFrame++;
            }
        } else if (s[i] == 'X') {
            score += 10;
            currentFrame++;
        } else {
            string frameStr = s.substr(i,2);
            int points = stoi(frameStr);
            score += points;
            if (currentFrame < 9) {
                currentFrame++;
            }
        }
    }
    return score;
}