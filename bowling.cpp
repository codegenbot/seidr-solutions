```
int getScore(string input) {
    int score = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'X') {
            score += 10;
            // Handle consecutive strikes
            if (i + 1 < input.length() && input[i + 1] == 'X') {
                score += 20;
            }
        } else if (input[i] == '/') {
            score += 5;
        } else if (input[i] == '-') {
            score += 2;
        } else {
            score += input[i] - '0';
        }
    }
    return score;
}
```