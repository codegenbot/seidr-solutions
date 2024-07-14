int bowling(string s) {
    int score = 0;
    int currentRolls = 0;
    vector<int> rolls;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls < 2) {
                if (currentRolls == 0) {
                    score += rolls[rolls.size() - 1];
                }
                currentRolls++;
            } else {
                currentRolls = 0;
                int lastRoll = 10 - (stoi(s.substr(s.find('/'))) - 5);
                rolls.push_back(lastRoll);
                score += lastRoll;
            }
        } else if (c == 'X') {
            rolls.push_back(10);
            score += 10;
            currentRolls = 0;
        } else {
            int roll = stoi(string(1, c));
            rolls.push_back(roll);
            score += roll;
            currentRolls++;
        }
    }

    return score;
}