int bowlingScore(const string& input) {
    int score = 0;
    int rolls = 0;
    vector<int> frames;

    for (char c : input) {
        if (c == 'X') {
            score += 30;
            frames.push_back(10);
            rolls++;
        } else if (c == '/') {
            frames.push_back(10 - (11 - rolls));
            rolls++;
        } else {
            int strike = 0;
            for (; c != '/' && c != 'X'; c = input[rolls++]) {
                strike += (c - '0');
            }
            if (c == 'X') {
                score += 10 + strike;
                frames.push_back(10);
            } else {
                score += strike;
                frames.push_back(strike);
            }
        }
    }

    return score;
}