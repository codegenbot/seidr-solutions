int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'X') {
            score += 10 + (currentFrame == 10 ? 10 : 20);
            currentRolls++;
            currentFrame++;
        } else if(s[i] == '/') {
            int thisRoll = 10 - currentRolls;
            score += thisRoll + (currentFrame == 10 ? thisRoll : 2 * thisRoll);
            currentRolls = 0;
            currentFrame++;
        } else {
            int thisRoll = s[i] - '0';
            if(thisRoll == 10) {
                score += 10;
                currentRolls++;
                currentFrame++;
            } else {
                score += thisRoll;
                currentRolls++;
                if(currentRolls < 2) {
                    continue;
                }
                int nextRoll = s[i+1] - '0';
                i++; // skip the '/'
                score += nextRoll;
                currentRolls++;
                currentFrame++;
            }
        }
    }

    return score;
}