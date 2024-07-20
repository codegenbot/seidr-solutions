using namespace std;

int bowlingScore(std::string frames) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < 10; i++) {
        if (frames[i] == 'X') { // Strike
            score += 10 + bowlingStrike(frames, i);
        } else if (frames[i] == '/') { // Spare
            if (i < 9) {
                score += 10 - (frames[i + 1] - '0' > 7 ? 10 : frames[i + 1] - '0');
            } else {
                score += 10;
            }
        } else {
            roll1 = frames[i] - '0';
            if (i < 8) {
                if (frames[i + 1] == 'X' || (frames[i + 1] == '/' && frames[i + 2] - '0' > 7)) {
                    score += roll1 + 10;
                } else {
                    roll2 = frames[i + 1] - '0';
                    score += roll1 + roll2;
                }
            } else {
                roll2 = frames[i + 1] - '0';
                score += roll1 + roll2;
            }
        }
    }

    return score;
}

int bowlingStrike(std::string frames, int i) {
    int score = 10;

    for (int j = i + 1; j < i + 4; j++) {
        if (frames[j] == 'X') { // Strike
            score += 10 + bowlingStrike(frames, j);
        } else if (frames[j] == '/') { // Spare
            score += 10 - (frames[j + 1] - '0' > 7 ? 10 : frames[j + 1] - '0');
        } else {
            score += frames[j] - '0';
        }
    }

    return score;
}