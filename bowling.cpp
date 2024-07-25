int bowling(string s) {
    int score = 0;
    bool spare = false;
    vector<int> frames;

    for (char c : s) {
        if (c == '/') {
            spare = true;
        } else if (c == 'X') {
            score += 10;
            frames.push_back(10);
            spare = false;
        } else {
            int strike = c - '0';
            score += strike;
            frames.push_back(strike);
            spare = false;
        }
    }

    for (int i = 0; i < frames.size(); ++i) {
        if (frames[i] == 10 && i < 9) {
            score += 10 + s[i+1] - '0' + s[i+2] - '0';
            i += 2;
        } else if (!spare) {
            score += frames[i];
        }
    }

    return score;
}