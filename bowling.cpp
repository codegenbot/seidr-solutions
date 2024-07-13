int getScore(string input) {
    int score = 0;
    int frame = 1;
    int ballIndex = 0;
    for (int i = 0; i < 10; ++i) {
        if (input[ballIndex] == 'X') {
            score += 10;
            score += (input[ballIndex + 2] == 'X') ? 10 : (input[ballIndex + 2] == '/' ? 10 - (input[ballIndex + 1] - '0') : input[ballIndex + 1] - '0');
            score += (input[ballIndex + 2] == 'X' && input[ballIndex + 4] == 'X') ? 10 : (input[ballIndex + 4] == '/' ? 10 - (input[ballIndex + 3] - '0') : input[ballIndex + 3] - '0');
            ballIndex++;
        } else if (input[ballIndex + 1] == '/') {
            score += 10;
            score += (input[ballIndex + 2] == 'X') ? 10 : input[ballIndex + 2] - '0';
            ballIndex += 2;
        } else {
            score += (input[ballIndex] - '0') + (input[ballIndex + 1] - '0');
            ballIndex += 2;
        }
    }
    return score;
}