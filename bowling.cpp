int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> frames;

    for (char c : s) {
        if (c == 'X') {
            frames.push_back(10);
            roll++;
        } else if (c == '/') {
            frames.push_back(10 - roll);
            roll = 0;
        } else {
            int i = c - '0';
            if (i + roll <= 10) {
                frames.push_back(i + roll);
                roll = 0;
            } else {
                frames.push_back(10);
                roll = 10 - i;
            }
        }
    }

    for (int i = 0; i < frames.size(); i++) {
        if (frames[i] == 10) continue;
        if (i + 1 < frames.size() && frames[i] + frames[i+1] == 10) {
            score += 10 + frames[i+2];
            i++;
        } else {
            score += frames[i];
        }
    }

    return score;
}