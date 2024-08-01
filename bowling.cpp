int bowlingScore(string input) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (input[i] == 'X') {
            score += 30;
        } else if (input[i] == '/') {
            int currentRoll = stoi(input.substr(i + 1, 2));
            score += 10 + currentRoll;
            i++;
        } else {
            int currentFrame = 0;
            for (int j = i; j < input.size(); j++) {
                if (input[j] == 'X') {
                    score += 30;
                    break;
                } else if (input[j] == '/') {
                    int nextRoll = stoi(input.substr(j + 1, 2));
                    score += currentFrame * 10 + nextRoll;
                    i++;
                    j++;
                    break;
                }
                currentFrame++;
            }
        }
    }
    return score;
}