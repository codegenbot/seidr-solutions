int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    vector<int> rolls;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls < 2) {
                if (rolls.back() + 10 - '0' <= 10) {
                    score += 10;
                } else {
                    score += rolls.back() + 10 - '0';
                }
                currentRolls = 0;
                rolls.clear();
            }
        } else {
            int roll = c - '0';
            if (currentRolls < 2) {
                rolls.push_back(roll);
                currentRolls++;
            } else {
                score += roll;
                currentRolls = 1;
                rolls.clear();
            }
        }
    }

    for (int i : rolls) {
        score += i;
    }

    return score;
}