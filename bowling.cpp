int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls;

    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                if (roll == 1)
                    score += 10 - rolls[rolls.size() - 1];
                else
                    score += 10;
                roll = 0;
            }
        } else if (isdigit(c)) {
            int val = c - '0';
            rolls.push_back(val);
            roll++;
        }
    }

    for (int i = 0; i < rolls.size(); i++) {
        if (i % 2 == 1) {
            score += rolls[i] + rolls[i + 1];
        } else {
            score += rolls[i];
        }
    }

    return score;
}