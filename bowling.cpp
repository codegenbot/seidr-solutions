int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls(21);

    for (char c : s) {
        if (c == '/') {
            score += getScore(roll);
            roll = 0;
        } else {
            roll++;
            rolls[20 - s.length() + 1] = c - 'X';
        }
    }

    score += getScore(roll);

    return score;
}

int getScore(int numRolls) {
    int score = 0;

    for (int i = 0; i < numRolls; i++) {
        if (rolls[i] == 10) {
            score += 10 + getScore(i + 1);
            break;
        } else if (rolls[i] >= 5) {
            int spare = rolls[i];
            for (int j = i + 1; j < numRolls && j - i <= 2; j++) {
                spare += rolls[j];
                if (spare == 10) {
                    score += 10;
                    break;
                }
            }
            if (spare > 10) {
                score += 10 + spare - 10;
            } else {
                score += spare;
            }
        } else {
            int num = rolls[i];
            for (int j = i + 1; j < numRolls && j - i <= 2; j++) {
                num += rolls[j];
            }
            score += num;
        }
    }

    return score;
}