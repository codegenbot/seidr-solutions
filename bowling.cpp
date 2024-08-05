int bowlingScore(string input) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (input[i] == 'X') {
            score += 30;
        } else if (input[i] == '/') {
            continue;
        } else {
            int currentFrameScore = 0;
            int nextRoll = input.find('/', i);
            if (nextRoll != string::npos) {
                currentFrameScore = 10 - (input[nextRoll - 1] - '0');
            }
            for (int j = i; j < nextRoll; j++) {
                currentFrameScore += input[j] - '0';
            }
            score += currentFrameScore;
        }
    }
    return score;
}