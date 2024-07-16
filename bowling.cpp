```
int bowlingScore(string s) {
    int score = 0;
    int roll = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            score += roll;
            roll = 0;
        } else if (isdigit(s[i])) {
            roll *= 10;
            roll += s[i] - '0';
        } else if (s[i] == 'K') {
            if (i + 2 < s.size() && isdigit(s[i+1]) && isdigit(s[i+2]))
                score += 10 + (s[i+1] - '0') + (s[i+2] - '0');
            else
                score += 10;
        }
    }

    if (roll > 9)
        score += 10;
    else
        score += roll;

    return score;
}