int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int strike = 1;
            while (strike > 0) {
                if (i + 2 <= s.length() && isdigit(s[i+1]) && isdigit(s[i+2])) {
                    int pins = (s[i+1] - '0') * 10 + (s[i+2] - '0');
                    score += 10 + pins;
                    strike = 0;
                } else {
                    score += 10;
                    strike = 0;
                }
                i++;
            }
        } else if (s[i] == '/') {
            int firstPin = (s[i-1] - '0') * 10 + (s[i+1] - '0');
            int secondPin = (s[i+2] - '0') * 10 + (s[i+3] - '0');
            score += firstPin;
        }
    }
    return score;
}