int bowlingScore(string input) {
    int score = 0;
    int roll = 0;
    vector<int> rolls;

    for (char c : input) {
        if (c == 'X') {
            rolls.push_back(10);
            roll++;
            score += 10 + (roll < 2 ? 10 : 0);
        } else if (c == '/') {
            score += 10 - rolls.back();
            roll++;
            rolls.pop_back();
        } else {
            int val = c - '0';
            rolls.push_back(val);
            score += val;
            roll++;

            if (roll >= 2) {
                int nextTwo = 0;
                for (int i = 0; i < 2 && i < rolls.size(); i++) {
                    nextTwo += rolls.back();
                    rolls.pop_back();
                }
                if (nextTwo == 10) {
                    score += 10 + (roll >= 3 ? 10 : nextTwo);
                } else {
                    score += nextTwo;
                }
            }
        }
    }

    return score;
}