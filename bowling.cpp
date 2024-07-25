int bowlingScore(string input) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (input[i] == 'X') {
            score += 30;
        } else if (input[i] != '/') {
            int frameScore = 0;
            if (input[i] == '5') {
                frameScore = 5;
            } else {
                frameScore = input[i] - '0';
            }
            if (i < 8 && input[i + 1] == '/') {
                score += frameScore;
            } else {
                score += frameScore;
                if (input[i + 1] != 'X') {
                    int nextRoll = input[i + 2] - '0';
                    score += nextRoll;
                }
            }
        } else {
            int firstRoll = input[i - 1] - '0';
            int secondRoll = input[i + 1] - '0';
            score += firstRoll + secondRoll;
        }
    }
    return score;
}