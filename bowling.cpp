int bowlingScore(string input) {
    int score = 0;
    int currentFrame = 1;
    for (char c : input) {
        if (c == '/') {
            int firstRoll = stoi(input.substr(0, input.find('/')));
            int secondRoll = 10 - firstRoll;
            score += firstRoll + secondRoll;
            currentFrame++;
        } else if (c == 'X') {
            score += 10;
            currentFrame++;
        } else {
            int roll = c - '0';
            score += roll;
            if (currentFrame < 10) {
                currentFrame++;
            }
        }
    }
    return score;
}