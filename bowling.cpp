int bowlingScore(const string& s) {
    vector<int> scores;
    int res = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            scores.push_back(10);
        } else if (s[i] == '/') {
            scores.push_back(10 - scores.back());
        } else if (s[i] == '-') {
            scores.push_back(0);
        } else {
            scores.push_back(s[i] - '0');
        }
    }
    for (int i = 0, frame = 0; frame < 10; ++frame) {
        if (scores[i] == 10) {
            res += 10 + scores[i + 1] + scores[i + 2];
            i += 1;
        } else if (scores[i] + scores[i + 1] == 10) {
            res += 10 + scores[i + 2];
            i += 2;
        } else {
            res += scores[i] + scores[i + 1];
            i += 2;
        }
    }
    return res;
}