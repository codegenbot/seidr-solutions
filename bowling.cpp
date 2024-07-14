int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            int next_i = i + 1;
            int strike_score = 10 - (s[next_i] - '0');
            while (next_i < s.length() && isdigit(s[next_i])) {
                strike_score *= 10;
                next_i++;
            }
            score += 10 + strike_score;
            i = next_i;
        } else {
            int roll1 = s[i] - '0';
            i++;
            if (i < s.length() && s[i] == '/') {
                int roll2 = 10 - (s[i + 1] - '0');
                score += roll1 + roll2;
                i++;
            } else {
                int roll2 = s[i] - '0';
                score += roll1 + roll2;
                i++;
            }
        }
    }
    return score;
}