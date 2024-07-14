int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            int next = i + 1;
            while (next < s.length() && !isdigit(s[next])) {
                next++;
            }
            int strike = stoi(string(1, s[i+1]));
            score += strike;
            i = next - 1;
        } else {
            int next = i;
            while (next < s.length() && isdigit(s[next])) {
                next++;
            }
            int pins = stoi(string(i + 1, s.substr(i)));
            if (pins > 10) {
                score += 10;
            } else {
                score += pins;
            }
            i = next - 1;
        }
    }
    return score;
}