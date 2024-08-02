int bowling(string s) {
    int score = 0;
    int currentFrame = 1;
    int rollsThisFrame = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (currentFrame < 10 ? 10 : 0);
            currentFrame++;
            rollsThisFrame = 0;
        } else if (c == '/') {
            int nonStrikeRolls = s.find('/');
            string prevRolls = s.substr(0, nonStrikeRolls);
            score += getStrikeValue(prevRolls);
            currentFrame++;
            rollsThisFrame = 0;
        } else {
            if (rollsThisFrame < 2) {
                score += c - '0';
                rollsThisFrame++;
            }
            if (rollsThisFrame == 2 && c != 'X') {
                string prevRolls = s.substr(0, nonStrikeRolls);
                int strikeValue = getStrikeValue(prevRolls);
                score += strikeValue;
                currentFrame++;
                rollsThisFrame = 0;
            }
        }
    }

    return score;
}

int getStrikeValue(string s) {
    int value = 10 + (s.find('/') > -1 ? getStrikeValue(s.substr(s.find('/') + 1)) : 10);
    return value;
}