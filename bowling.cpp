int bowlingScore(const string& input) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (input[i] == 'X') {
            score += 30;
        } else if (isdigit(input[i])) {
            int framePoints = 0;
            int j = 1;
            while (j <= input[i + 1 - '0'] && i < 9) {
                if (input[i + j] == '/') {
                    break;
                }
                ++framePoints;
                ++j;
            }
            score += framePoints + 10;
        } else {
            int framePoints = 0;
            for (int j = 1; j <= input[i] - '0'; ++j) {
                if (input[i + j] == '/') {
                    break;
                }
                ++framePoints;
            }
            score += framePoints;
        }
    }
    return score;
}