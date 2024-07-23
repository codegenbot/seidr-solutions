int bowlingScore(string input) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (input[i] == 'X') { // strike
            score += 10 + (i < 9 ? 10 : 0);
        } else if (input[i] == '/') { // spare
            int j = i + 2;
            while (j < 11 && input[j] != 'X' && input[j] != '/') {
                j++;
            }
            score += 10 - (input[i + 1] - '0') - (input[i + 2] - '0');
        } else { // normal
            int first = input[i] - '0';
            int second = input[i + 1] - '0';
            if (first + second >= 10) { // spare
                score += 10;
            } else {
                score += first + second;
            }
        }
    }
    return score;
}