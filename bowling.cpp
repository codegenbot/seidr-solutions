```cpp
int calculateScore(string bowls) {
    int score = 0;
    int numStrikes = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
            numStrikes++;
        } else if (numStrikes > 0 && bowls[i] == '/') {
            score += 5;
            numStrikes--;
        } else if (bowls[i] == '-') {
            score -= 5;
        } else {
            score += bowls[i] - '0';
        }
    }
    return score;
}
```