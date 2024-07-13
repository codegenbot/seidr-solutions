int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 10 + (lastRoll ? 10 : 0);
            lastRoll = true;
        } else if (isdigit(s[i])) {
            int roll = 0;
            for (int j = i; j < i+2 && j < s.length(); j++) {
                roll = roll * 10 + (s[j] - '0');
            }
            score += roll;
            lastRoll = false;
        } else if (s[i] == '/') {
            int first, second;
            sscanf(&s[i], "/%d%d", &first, &second);
            score += first + second;
            lastRoll = false;
        }
    }

    return score;
}