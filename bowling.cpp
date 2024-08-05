int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls;

    for (char c : s) {
        if (c == '/') {
            if (roll >= 1 && roll <= 2) {
                score += 10 - rolls[rolls.size() - 1] - rolls[rolls.size() - 2];
            }
            roll = 0;
        } else if (isdigit(c)) {
            int val = c - '0';
            roll *= 10 + val;
        }
    }

    for (int i = 0; i < rolls.size(); i++) {
        score += rolls[i];
    }

    return score;
}