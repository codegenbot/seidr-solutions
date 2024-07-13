int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (currentFrame == 10 ? 10 : 0);
            currentFrame++;
        } else if (s[i] == '/') {
            int firstRoll = s[i - 1] - '0';
            int secondRoll = s[i + 1] - '0';
            score += firstRoll + secondRoll;
            currentFrame++;
        } else {
            int roll = s[i] - '0' + (s[i + 1] == 'X' ? 10 : s[i + 1] - '0');
            if (currentFrame < 10) {
                score += roll;
            } else {
                score += roll / 2 + (roll % 2);
            }
            currentFrame++;
        }
    }
    return score;
}