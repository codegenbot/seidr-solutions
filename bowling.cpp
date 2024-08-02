int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            vector<int> rolls;
            while (i < s.length() && s[i] != '/') {
                int roll = 0;
                while (i < s.length() && s[i] >= '1' && s[i] <= '9') {
                    roll = roll * 10 + s[i++] - '0';
                }
                i++;
                if (roll == 10) break;
                rolls.push_back(roll);
            }
            int bonus = 0;
            for (int j = 0; j < rolls.size(); j++) {
                score += rolls[j];
                if (j > 0 && rolls[j] + rolls[j-1] >= 10) {
                    bonus = max(bonus, rolls[j]);
                }
            }
            score += bonus;
        } else {
            int roll = 0;
            while (i < s.length() && s[i] >= '1' && s[i] <= '9') {
                roll = roll * 10 + s[i++] - '0';
            }
            i++;
            score += roll;
        }
    }
    return score;
}