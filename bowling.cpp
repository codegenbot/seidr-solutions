int bowling(string s) {
    int score = 0;
    bool spare = false;
    vector<int> rolls;

    for (char c : s) {
        if (c == '/') {
            spare = true;
        } else if (c != 'X') {
            rolls.push_back(stoi(c));
        }
    }

    int prevRolls = 0;
    int currentRolls = 0;

    for (int i = 0; i < rolls.size(); i++) {
        if (spare) {
            score += max(prevRolls + min(rolls[i-1], 10 - prevRolls), 10);
            spare = false;
        } else if (i % 2 == 1) {
            currentRolls = rolls[i];
            score += prevRolls + currentRolls;
            prevRolls = currentRolls;
            currentRolls = 0;
        }
    }

    return score;
}