```
int getScore(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size(); i++) {
        char c = bowls[i];
        if (c == 'X') {
            score += 10;
        } else if (c == '/') {
            score += 5;
        } else if (c == '-') {
            score -= 5;
        } else if (isdigit(c)) {
            score += c - '0';
        }
    }
    return score;
}
```
