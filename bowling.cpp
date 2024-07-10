int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            int next = s.find('/', i);
            int first = s[i + 1] - '0';
            int second = s[next + 1] - '0';
            score += first + second;
            i = next;
        } else {
            int currentFrame = 0;
            while (i < s.length() && currentFrame < 2) {
                if (s[i] == 'X') {
                    score += 30;
                    break;
                } else if (s[i] >= '1' && s[i] <= '9') {
                    int pin = s[i] - '0';
                    score += pin;
                    i++;
                } else {
                    int next = s.find('/', i);
                    int first = s[i + 1] - '0';
                    int second = s[next + 1] - '0';
                    if (s[i] == '-') {
                        currentFrame++;
                    }
                    score += first + (second > 0 ? 1 : 0);
                    i = next;
                }
            }
        }
    }
    return score;
}