int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == '-') continue;
        else if (s[i] == 'X') {
            score += 30;
            if (i < 9) score += bowlingScore(s.substr(i + 1)) - 15;
        }
        else if (isdigit(s[i])) {
            int balls = 0;
            for (int j = i; j < s.length() && balls < 3; ++j) {
                if (s[j] == '/') break;
                balls++;
            }
            string ballsStr = s.substr(i, balls);
            score += (ballsStr[0] - '0') * 10 + (ballsStr[1] - '0');
            i += balls - 1;
        }
    }
    return score;
}