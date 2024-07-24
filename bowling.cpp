int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            i++;
            if (i < s.length() && (s[i] == '/' || s[i] == '-')) {
                score -= 10;
            }
        } else if (s[i] == '/') {
            int next = i + 1;
            while (next < s.length() && !isdigit(s[next])) {
                next++;
            }
            int pins = 0;
            for (; next < s.length(); next++) {
                pins = pins * 10 + (s[next] - '0');
            }
            score += 10 + pins;
        } else if (s[i] == '-') {
            int next = i + 1;
            while (next < s.length() && !isdigit(s[next])) {
                next++;
            }
            int pins = 0;
            for (; next < s.length(); next++) {
                pins = pins * 10 + (s[next] - '0');
            }
            score += 10 + pins;
        } else {
            int pins = 0;
            while (i < s.length() && isdigit(s[i])) {
                pins = pins * 10 + (s[i] - '0');
                i++;
            }
            if (pins > 10) {
                score += 10 + (pins - 10);
            } else {
                score += pins;
            }
        }
    }
    return score;
}