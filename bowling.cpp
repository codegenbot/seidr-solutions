using namespace std;

int bowlingScore(std::string frames) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < 10; i++) {
        if (frames[i] == 'X') { 
            score += 10 + bowlingStrike(frames, i);
        } else if (frames[i] == '/') { 
            score += 10 - frames[i+1] - frames[i+2];
            i++;
        } else {
            roll1 = frames[i] - '0';
            roll2 = frames[i+1] - '0';
            if (roll1 + roll2 >= 10) { 
                score += roll1 + roll2;
            } else {
                score += roll1 + roll2;
            }
        }
    }

    return score;
}

int bowlingStrike(std::string frames, int i) {
    int score = 0;

    for (int j = i+1; j < i+4; j++) {
        if (frames[j] == 'X') { 
            score += 10 + bowlingStrike(frames, j);
        } else if (frames[j] == '/') { 
            score += 10 - frames[j+1] - frames[j+2];
            break;
        } else {
            score += frames[j] - '0' + frames[j+1] - '0';
            break;
        }
    }

    return score;
}