int bowlingScore(string bowls) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;
    
    for (char bowl : bowls) {
        if (bowl == '/') {
            score += 10 - currentRolls;
            currentRolls = 0;
            currentFrame++;
        } else if (isdigit(bowl)) {
            currentRolls++;
            if (currentRolls == 2 || currentFrame == 10) {
                score += bowl - '0' + (currentRolls * (bowl - '0'));
                currentRolls = 0;
                currentFrame++;
            }
        }
    }
    
    return score;
}