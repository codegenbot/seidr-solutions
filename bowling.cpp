int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int firstRoll = 0;
    int secondRoll = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'X') {
            score += 10 + (firstRoll > 0 ? firstRoll : 10);
            firstRoll = 0;
            currentFrame++;
        } else if(s[i] == '/') {
            secondRoll = 10 - firstRoll;
            score += 10 + firstRoll;
            currentFrame++;
            firstRoll = 0;
        } else {
            if(firstRoll == 0) {
                firstRoll = s[i] - '0';
            } else {
                secondRoll = s[i] - '0';
            }
        }
    }

    return score;
}