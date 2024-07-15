int bowlingScore(char* s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
            if (i < 9 && (s[i + 1] == '/' || s[i + 1] == 'X')) {
                score -= 20;
            }
        } else if (s[i] == '/') {
            int next = i + 2;
            while (next < 10 && (s[next] < '7' || s[next] > '9')) {
                next++;
            }
            score += 10 + (next - i - 1) * 1;
        } else {
            int count = 0;
            while (i < 10 && s[i] >= '1' && s[i] <= '9') {
                count *= 10;
                count += s[i++] - '0';
            }
            score += count;
        }
    }
    return score;