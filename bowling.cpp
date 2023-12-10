```
int calculateScore(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size() - 1; i++) {
        if (bowls[i] == 'X') {
            score += 10;
        } else if (bowls[i] == '/') {
            score += 5;
        } else if (bowls[i] == '-') {
            score -= 5;
        } else {
            score += bowls[i] - '0';
        }
    }
    return score;
}
```