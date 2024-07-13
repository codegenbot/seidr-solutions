int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls;

    for (char c : s) {
        if (c >= '0' && c <= '9') {
            rolls.push_back(c - '0');
        } else if (c == '/') {
            if (roll < 2) {
                score += roll * 10;
            }
            roll = 0;
        } else if (c == 'X') {
            score += 30;
            roll = 0;
        } else if (c == '-') {
            continue;
        } else {
            score += roll * 10 + c - '0';
            roll = 0;
        }
    }

    if (roll < 2) {
        score += roll * 10;
    } else {
        score += roll * 10 + rolls[rolls.size() - 1];
    }

    return score;
}