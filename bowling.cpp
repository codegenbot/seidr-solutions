int calculateScore(string str) {
    int score = 0;
    int rolls = 0;
    int lastRoll = -1;

    for (char c : str) {
        if (c == '/') {
            continue;
        }
        int roll = stoi(c == 'X' ? "10" : c == '-' ? "0" : string(1, c));
        if (roll == 10) {
            score += roll;
            rolls++;
            lastRoll = roll;
        } else {
            if (lastRoll != -1 && (rolls + 1) % 2 == 0) {
                int prevTwoRolls = min(lastRoll / 2, 5);
                score += prevTwoRolls * 2;
            }
            score += roll;
            rolls++;
        }
    }
    return score;
}