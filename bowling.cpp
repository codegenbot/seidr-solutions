int calculateScore(string bowls) {
    int score = 0;
    int rolls = 0;
    vector<int> frames;

    for (char c : bowls) {
        if (c == '/') {
            if (frames.back() < 10) {
                frames.back()++;
            } else {
                score += 10;
                frames.pop_back();
            }
        } else if (isdigit(c)) {
            int roll = c - '0';
            frames.push_back(roll);
            rolls++;
            if (rolls == 2) {
                // Check for strike
                if (frames[0] + frames[1] == 10) {
                    score += 10 + frames[2];
                    for (int i = 3; i < 10; i++) {
                        if (!frames[i].empty()) {
                            frames.pop_back();
                        }
                    }
                    rolls = 0;
                } else {
                    // Check for spare
                    if (frames[0] + frames[1] == 10) {
                        score += 10;
                        frames.pop_back();
                        rolls--;
                    } else {
                        score += frames[0] + frames[1];
                        for (int i = 2; i < 10; i++) {
                            if (!frames[i].empty()) {
                                frames.pop_back();
                            }
                        }
                        rolls = 0;
                    }
                }
            }
        }
    }

    return score;
}