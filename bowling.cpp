int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;
    vector<int> frames;

    for (char c : s) {
        if (c != '/') {
            if (c == 'X') {
                score += 30;
                rolls++;
            } else if (c == '-') {
                score += frames.back() + 10;
                rolls++;
            } else {
                int spare = stoi(string(1, c)) * 10;
                score += spare;
                rolls++;
            }
        } else {
            int firstRoll = stoi(s.substr(0, 1));
            s.erase(0, 2);
            int secondRoll = stoi(string(1, s[0]));
            if (firstRoll + secondRoll == 10) {
                score += 10 + frames.back();
                rolls++;
                frames.pop_back();
            } else {
                frames.push_back(firstRoll * 10 + secondRoll);
            }
        }
    }

    return score;
}