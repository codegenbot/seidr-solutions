int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10;
            lastRoll = true;
        } else if (s[i] == '/') {
            int roll1 = stoi(s.substr(i - 1, 1));
            int roll2 = 10 - roll1;
            score += roll1 + roll2;
            i++;
            lastRoll = false;
        } else {
            int roll1 = stoi(s.substr(i, 1));
            int roll2 = stoi(s.substr(i + 1, 1));
            if (roll1 == 10) {
                score += roll1 + roll2;
                i++;
                lastRoll = true;
            } else {
                score += roll1 + roll2;
                if (!lastRoll)
                    score += min(roll1, roll2);
                lastRoll = false;
            }
        }
    }

    return score;
}