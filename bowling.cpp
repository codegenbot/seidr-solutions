int bowling(string s) {
    int score = 0;
    vector<int> frames;
    for (char c : s) {
        if (c == 'X') {
            frames.push_back(10);
        } else if (c == '/') {
            frames.push_back(10 - stoi(s.substr(s.find('/') + 1, 1)));
        } else {
            int frame = 0;
            for (; c != '/' && c != 'X'; c = s[s.find(c) + 1]) {
                frame += c - '0';
            }
            frames.push_back(frame);
        }
    }

    for (int i = 0; i < frames.size(); i++) {
        if (frames[i] == 10) {
            score += 10;
            if (i < frames.size() - 1 && frames[i + 1] != 10) {
                score += frames[i + 1];
            }
        } else {
            score += frames[i];
            if (i < frames.size() - 1) {
                int next = frames[i + 1];
                if (next == 10) {
                    score += 10;
                } else if (next > 0) {
                    score += next;
                }
            }
        }
    }

    return score;
}