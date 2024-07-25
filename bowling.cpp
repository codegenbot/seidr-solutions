int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int previousRoll = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            currentRoll = 10;
        } else if (isdigit(s[i])) {
            currentRoll *= 10;
            int digit = s[i] - '0';
            score += digit;
        } else { // '/'
            int spare = 10 - previousRoll;
            score += previousRoll + spare;
            currentRoll = 0;
        }
        previousRoll = currentRoll;
    }

    return score;
}