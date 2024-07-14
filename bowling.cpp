int bowlingScore(string input) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (input[i] == '/') {
            string firstPart = input.substr(0, i);
            string secondPart = input.substr(i + 1);
            int firstFrameScore = getFirstFrameScore(firstPart);
            int secondFrameScore = getSecondFrameScore(secondPart);
            score += firstFrameScore + secondFrameScore;
        } else {
            int frameScore = getSingleFrameScore(input[i]);
            score += frameScore;
        }
    }
    return score;
}

int getFirstFrameScore(string input) {
    if (input[0] == 'X') {
        return 10;
    } else {
        return stoi(input);
    }
}

int getSecondFrameScore(string input) {
    if (input[0] == '/') {
        return 10 - stoi(input.substr(1));
    } else if (input[0] == 'X') {
        return 10;
    } else {
        int firstRoll = stoi(input.substr(0, 1));
        int secondRoll = 10 - firstRoll;
        return firstRoll + secondRoll;
    }
}

int getSingleFrameScore(char input) {
    if (input == 'X') {
        return 10;
    } else if (input == '/') {
        return 10;
    } else {
        return stoi(input);
    }
}