int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;
    vector<int> frames;

    for (char c : s) {
        if (c == 'X') {
            frames.push_back(10);
            score += 10;
            rolls++;
        } else if (isdigit(c)) {
            int pins = c - '0';
            if (c == '5' || c == '/') {
                frames.push_back(pins + (c == '/' ? 1 : 0));
                score += pins;
                rolls++;
            } else {
                int nextPins = s[s.find(c) + 1] - '0';
                if (nextPins == 10) {
                    frames.push_back(10);
                    score += 10;
                    rolls += 2;
                } else {
                    score += pins + nextPins;
                    rolls++;
                }
            }
        }
    }

    while (rolls < 10) {
        if (frames[rolls - 1] == 0) {
            frames.push_back(10);
            score += 10;
            rolls++;
        } else {
            int nextPins = 10 - frames[rolls - 1];
            if (nextPins > frames[rolls]) {
                frames.push_back(frames[rolls]);
                score += frames[rolls];
                rolls++;
            } else {
                score += frames[rolls] + nextPins;
                rolls++;
            }
        }
    }

    return score;
}