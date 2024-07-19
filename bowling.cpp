int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> frames;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (roll > 1) {
                int prevRolls = roll - 1;
                int frameScore = 10 + frames[frames.size() - 2];
                score += frameScore;
            }
            roll = 0;
        } else if (isdigit(s[i])) {
            int digit = s[i] - '0';
            roll += digit;
        }

        if (i == s.length() - 1 || (i + 1 < s.length() && s[i + 1] == '/')) {
            frames.push_back(roll);
            roll = 0;
        }
    }

    for (int i = 0; i < frames.size(); i++) {
        if (frames[i] >= 10) {
            score += 10 + (i != 9 ? 10 : 0);
        } else {
            score += frames[i];
        }
    }

    return score;
}