int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls;

    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                if (roll == 0) {
                    rolls.push_back(10 - (10 - stoi(string(1, c)) + 10 - stoi(string(1, s[s.find('/')+1]))));
                } else {
                    rolls.push_back(stoi(string(1, c)));
                }
            }
            roll = 0;
        } else if (c == 'X') {
            rolls.push_back(10);
            roll++;
        } else {
            roll++;
        }
    }

    for (int i = 0; i < rolls.size(); i++) {
        if (rolls[i] == 10) {
            score += rolls[i];
            continue;
        }
        if (i + 1 < rolls.size() && rolls[i] + rolls[i+1] > 10) {
            score += 10 - (10 - rolls[i] - rolls[i+1]);
            i++;
        } else {
            score += rolls[i];
        }
    }

    return score;
}