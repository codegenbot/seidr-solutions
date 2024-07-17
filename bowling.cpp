int bowlingScore(const string& input) {
    int score = 0;
    vector<int> rolls;
    string roll;

    for (char c : input) {
        if (c == '/') {
            int roll1 = stoi(roll);
            int roll2 = stoi(input.substr(input.find('/') + 1, 1));
            if (roll1 + roll2 >= 10) {
                score += 10;
            } else {
                score += roll1 + roll2;
            }
            rolls.push_back(max(roll1, roll2));
        } else {
            roll += c;
        }
    }

    int bonus = 0;
    for (int i = 0; i < 3; i++) {
        if (i >= rolls.size()) break;
        if (rolls[i] == 10) {
            bonus += 30;
        } else if (rolls[i] + rolls[i+1] >= 10) {
            bonus += 20;
        }
    }

    return score + bonus;
}