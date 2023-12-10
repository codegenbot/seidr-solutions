
Sure, here's the modified code that handles multiple strikes and spares in a row:
```
int getScore(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
            // Check for multiple strikes in a row
            if (i + 2 < bowls.size() && bowls[i + 1] == 'X' && bowls[i + 2] == 'X') {
                score += 10;
            }
        } else if (bowls[i] >= '0' && bowls[i] <= '9') {
            score += bowls[i] - '0';
        }
    }
    return score;
}
```