int bowlingScore(string str) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (str[i] == 'X') {
            score += 30;
        } else if (isdigit(str[i])) {
            int count = 1;
            while (i + 1 < 10 && isdigit(str[i+1])) {
                i++;
                count++;
            }
            score += count * (10 - i / 2);
        } else {
            int first = str[i] - '0';
            int second = str[i + 1] - '0';
            if (str[i + 2] == '/') {
                score += first + 10;
                i++;
            } else {
                score += first + second;
            }
        }
    }
    return score;
}