int bowlingScore(string input) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (input[i] == '/') {
            int first = input[i-1] - '0';
            int second = input[i+1] - '0';
            score += max(first, second);
        } else {
            score += input[i] - '0';
        }
    }
    return score;
}