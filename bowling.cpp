```cpp
int getScore(const std::string& frames) {
    int score = 0;
    int frame = 0;

    for (int i = 0; i < frames.size(); i++) {
        if (frame == 9) {
            break;
        }

        if (frames[i] == 'X') {
            score += 10;
            if (i + 2 < frames.size()) {
                if (frames[i + 2] == 'X') {
                    score += 10;
                } else if (frames[i + 2] == '/') {
                    score += 10 - (frames[i + 1] - '0');
                } else {
                    score += frames[i + 1] - '0' + frames[i + 2] - '0';
                }
            }
            frame++;
        } else if (frames[i] == '/') {
            score += 10 - (frames[i - 1] - '0');
            if (i + 1 < frames.size()) {
                if (frames[i + 1] == 'X') {
                    score += 10;
                } else {
                    score += frames[i + 1] - '0';
                }
            }
            frame++;
        } else {
            score += frames[i] - '0';

            if (frame > 0 && frames[i - 1] == '/') {
                score += frames[i] - '0';
            }

            frame++;
        }
    }

    return score;
}
```