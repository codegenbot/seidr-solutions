int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // strike
            score += 10 + bowlingScoreForNextTwoFrames(s, i);
        } else if (s[i] == '/') { // spare
            int nextRoll = s[i + 2] - '0';
            score += 10 + nextRoll;
            i++;
        } else { // normal roll
            int firstRoll = s[i] - '0';
            int secondRoll = s[i + 1] - '0';
            score += firstRoll + secondRoll;
        }
    }
    return score;
}

int bowlingScoreForNextTwoFrames(string s, int i) {
    int score = 0;
    for (int j = i; j < i + 2; j++) {
        if (s[j] == 'X') { // strike
            score += 10 + bowlingScoreForNextOneFrame(s, j);
        } else if (s[j] == '/') { // spare
            int nextRoll = s[j + 2] - '0';
            score += 10 + nextRoll;
            j++;
        } else { // normal roll
            int firstRoll = s[j] - '0';
            int secondRoll = s[j + 1] - '0';
            score += firstRoll + secondRoll;
        }
    }
    return score;
}

int bowlingScoreForNextOneFrame(string s, int i) {
    if (s[i] == 'X') { // strike
        return 10;
    } else if (s[i] == '/') { // spare
        int nextRoll = s[i + 2] - '0';
        return 10 + nextRoll;
    } else { // normal roll
        int firstRoll = s[i] - '0';
        int secondRoll = s[i + 1] - '0';
        return firstRoll + secondRoll;
    }
}