Here is the solution:

int bowling(string s) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            if (s[i + 1] - '0' <= 1) {
                score += 10 - (s[i + 1] - '0');
                frame++;
            } else {
                int first = s[i + 1] - '0';
                int second = s[i + 2] - '0';
                if (first + second == 10) {
                    score += 10;
                    frame++;
                } else {
                    score += first + 10;
                    frame++;
                }
            }
        } else if (s[i] != 'X') {
            int points = s[i] - '0';
            if (points < 2) {
                score += 10;
                frame++;
            } else {
                score += points;
                frame++;
            }
        } else {
            score += 10;
            frame++;
        }
    }
    return score;
}