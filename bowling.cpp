int calculateScore(std::string input) {
    int score = 0;
    int frame = 0;
    int rolls = 0;
    int frames[10] = {0};

    for (char ch : input) {
        if (ch == 'X') {
            frames[frame] += 10;
            if (frame < 9) {
                frames[frame+1] += 10;
                if (rolls < 18) {
                    frames[frame+2] += 10;
                }
            }
            rolls++;
        } else if (ch == '/') {
            frames[frame] += (10 - frames[frame-1]);
            if (frame < 9) {
                frames[frame+1] += (10 - frames[frame-1]);
            }
            rolls++;
            frames[frame] += 10;
        } else if (ch == '-') {
            rolls++;
        } else {
            frames[frame] += (ch - '0');
            rolls++;
        }

        if (rolls % 2 == 0) {
            frame++;
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
    }

    return score;
}