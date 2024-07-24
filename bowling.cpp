int bowlingScore(string s) {
    int score = 0;
    vector<int> rolls;

    for (char c : s) {
        if (c == '/') {
            if (rolls.size() < 2)
                return -1; // invalid input
            int frameScore = rolls[rolls.size() - 1] + rolls[rolls.size() - 2];
            score += frameScore;
            rolls.clear();
        } else if (c == 'X') {
            rolls.push_back(10);
        } else if (isdigit(c)) {
            int roll = c - '0';
            rolls.push_back(roll);
        }
    }

    for (int i = 0; i < rolls.size(); i++) {
        score += rolls[i];
        if (i < rolls.size() - 1) {
            if (rolls[i] + rolls[i + 1] == 10) {
                score += rolls[i + 1];
                i++;
            }
        }
    }

    return score;
}