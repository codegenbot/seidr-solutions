```
int calculateScore(const string& bowls) {
    int score = 0;
    int numStrikes = 0;
    int numSpares = 0;

    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
            numStrikes++;
        } else if (bowls[i] == '/') {
            score += 5;
            numSpares++;
        } else if (bowls[i] == '-') {
            score -= 5;
            numSpares = 0;
        }
    }

    // Adjust the score for consecutive strikes or spares
    if (numStrikes > 1) {
        score += (numStrikes - 1) * 2;
    }
    if (numSpares > 1) {
        score += (numSpares - 1) * 2;
    }

    return score;
}
```