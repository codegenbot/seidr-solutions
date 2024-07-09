int bowlingScore(const string& bowls) {
    int score = 0;
    int roll = 0;
    vector<int> rolls;

    for (char c : bowls) {
        if (c == '/') {
            if (roll < 2) {
                rolls.push_back(10);
            } else {
                int sum = 0;
                for (int i = 0; i < 2; i++) {
                    sum += rolls[rolls.size() - 3 - i];
                }
                rolls.push_back(sum);
            }
            roll = 0;
        } else if (c == 'X') {
            score += 10;
            rolls.push_back(10);
            roll = 0;
        } else {
            int strike = c - '0';
            score += strike + strike + strike;
            roll++;
        }
    }

    for (int i = 0; i < rolls.size(); i++) {
        if (rolls[i] == 10) continue;
        if (i < 7) {
            score += rolls[i];
        } else if (i < 9) {
            int prevTwo = rolls[i - 1] + rolls[i - 2];
            score += prevTwo;
        }
    }

    return score;
}