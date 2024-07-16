int bowlingScore(string frames) {
    int score = 0;
    for (int i = 0; i < frames.size(); i++) {
        if (frames[i] == 'X') { // strike
            score += 10 + scoreOfNextTwo(frames, i + 1);
        } else if (frames[i] == '/') { // spare
            int j = i + 1;
            while (j < frames.size() && frames[j] != ' ') j++;
            score += 10 - (frames[i - 1] - '0') + (frames[j] - '0');
        } else {
            int strikeOrSpare = 0;
            if (i < frames.size() - 1) {
                if (frames[i + 1] == '/') strikeOrSpare = 1;
                if (frames[i + 2] == 'X') strikeOrSpare = 2;
            }
            score += (frames[i] - '0') * (strikeOrSpare ? 2 : 1);
        }
    }
    return score;
}

int scoreOfNextTwo(string frames, int i) {
    int nextOne = 0, nextTwo = 0;
    for (int j = i; j < frames.size() && j < i + 3; j++) {
        if (frames[j] == 'X') {
            nextOne = 10;
            nextTwo = 0;
            break;
        } else if (frames[j] == '/') {
            int k = j + 1;
            while (k < frames.size() && frames[k] != ' ') k++;
            nextOne = 10 - (frames[j - 1] - '0') + (frames[k] - '0');
            break;
        } else {
            nextOne += frames[j] - '0';
            if (j == i + 1) continue;
            nextTwo = frames[j] - '0';
        }
    }
    return nextOne + nextTwo;
}