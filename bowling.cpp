int bowlingScore(string s) {
    int score = 0;
    bool first = true;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '/') {
            if (first) {
                score += 10 - (s[i-1] - '0');
                first = false;
            } else {
                score += 10;
            }
        } else if (isdigit(s[i])) {
            int n = s[i] - '0';
            if (!first) {
                if (s[i+1] == '/') {
                    score += 10 - n;
                    first = true;
                } else {
                    score += n + ((i+1 < s.size() && isdigit(s[i+1])) ? s[i+1] - '0' : 0);
                }
            } else {
                if (n == 10) {
                    score += 10 + ((i+2 < s.size() && s[i+1] == '/') ? 8 : bowlingScore(s.substr(i+1)));
                } else {
                    score += n + ((i+1 < s.size() && isdigit(s[i+1])) ? s[i+1] - '0' : 0);
                }
            }
        }
    }
    return score;
}