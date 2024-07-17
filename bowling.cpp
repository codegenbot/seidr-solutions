int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (s[i-1] != 'X') {
                score += 10 - (s[i-1] - '0');
            }
            frame++;
        } else if (i == s.length() - 1) {
            score += s[i] - '0';
        } else {
            int curr = s[i] - '0' + (s[i+1] - '0');
            if (curr < 10) {
                score += curr;
                frame++;
            } else {
                score += 10;
                i++; // move to the next frame
                while (i < s.length() && s[i] != '/') {
                    curr -= s[i] - '0';
                    i++;
                }
                if (curr > 0) {
                    score += curr;
                }
            }
        }
    }
    return score;
}