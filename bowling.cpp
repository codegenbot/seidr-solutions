int bowlingScore(string input) {
    int score = 0;
    int currentRoll = 0;
    for (int i = 0; i < 10; i++) {
        if (input[i] == 'X') {
            score += 30;
            currentRoll = 2;
        } else if (input[i] == '/') {
            int firstRoll = input[i-1] - '0';
            int secondRoll = input[i+1] - '0';
            score += firstRoll + secondRoll;
            currentRoll = 2;
        } else {
            for (int j = 0; j < currentRoll; j++) {
                if (j == 0) {
                    score += input[i] - '0';
                } else {
                    score += (input[i] - '0') * 10;
                }
            }
            currentRoll = 1;
        }
    }
    return score;
}