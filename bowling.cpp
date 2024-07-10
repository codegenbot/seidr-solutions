int bowlingScore(string str) {
    int score = 0;
    vector<int> rolls;

    for (char c : str) {
        if (c == '/') {
            if (rolls.back() == 10) {
                score += 30;
                rolls.pop_back();
            } else {
                score += 10 + rolls.back();
                rolls.pop_back();
            }
        } else if (isdigit(c)) {
            int roll = c - '0';
            if (roll + rolls.back() <= 10) {
                rolls.push_back(roll);
            } else {
                while (rolls.back() + roll > 10) {
                    rolls.back() = 10;
                    score += 10;
                    if (rolls.size() == 1) break;
                    rolls.pop_back();
                }
                rolls.push_back(roll - 10);
                if (rolls.size() == 1) score += roll - 10;
            }
        }
    }

    while (!rolls.empty()) {
        score += rolls.back();
        rolls.pop_back();
    }

    return score;
}