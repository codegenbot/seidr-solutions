```
int getScore(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.length(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
            // Check if the next frame is also a strike
            if (i + 1 < bowls.length() && bowls[i + 1] == 'X') {
                score += 10;
            }
        } else if (bowls[i] == '/') {
            score += 10 - int(bowls[i-1]);
        } else if (bowls[i] == '-') {
            score += 10;
        } else {
            score += int(bowls[i]);
        }
    }
    return score;
}
```
This code should compile successfully, as the backticks (```) at the beginning and end of the code snippet are removed.