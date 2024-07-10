int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    vector<int> rolls;

    for (char c : s) {
        if (c == '/') {
            currentRolls = 0;
        } else if (c == 'X') {
            score += 30;
            currentRolls++;
        } else if (c >= '1' && c <= '9') {
            int roll = c - '0';
            rolls.push_back(roll);
            currentRolls++;

            if (currentRolls == 2) {
                if (rolls[0] + rolls[1] < 10) {
                    score += rolls[0] + rolls[1];
                } else {
                    int bonus = 10 - rolls[0] - rolls[1];
                    for (int i = 0; i < rolls.size(); i++) {
                        score += rolls[i];
                    }
                    score -= bonus;
                }
                currentRolls = 0;
                rolls.clear();
            }
        }
    }

    return score;
}