int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;
    vector<int> frames;

    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frames.push_back(10);
        } else if (c == '/') {
            score += 10 - (frames.back() + 1);
            frames.pop_back();
        } else if (isdigit(c)) {
            int frame = 0;
            for (char d : s.substr(s.find(c), 2)) {
                if (d == 'X') {
                    score += 30;
                    frames.push_back(10);
                    break;
                } else if (isdigit(d)) {
                    frame = 10 - (c - '0' + d - '0');
                    score += frame;
                    frames.push_back(frame);
                    rolls++;
                    break;
                }
            }
        }
    }

    return score;
}