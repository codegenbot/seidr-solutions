int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    bool strike = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + currentRoll;
            currentRoll = 0;
            strike = true;
        } else if (s[i] == '/') {
            int roll1 = s[i - 1] - '0';
            int roll2 = s[i - 2] - '0';
            score += roll1 + roll2;
            currentRoll = 0;
            strike = false;
        } else {
            currentRoll = currentRoll * 10 + (s[i] - '0');
        }
    }

    if (!strike) {
        score += currentRoll;
    }

    return score;
}