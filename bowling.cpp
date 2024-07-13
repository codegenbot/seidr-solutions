```
int bowlingScore(std::string s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
            if (i < 9 && s[i + 1] != '/') continue;
        } else if (s[i] == '/') {
            int next = i + 2;
            while (next < 10 && s[next] != '-') ++next;
            score += 10 + (next - i - 1) * 1;
            i = next - 1;
        } else {
            int count = 0;
            while (i < 10 && s[i] != '/') ++i, ++count;
            score += count;
        }
    }
    return score;
}