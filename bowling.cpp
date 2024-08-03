int bowlingScore(std::string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 - (stoi(s.substr(0, s.find('/'))) + stoi(s.substr(s.find('/'), 2)));
            frame++;
            s.erase(0, s.find('/') + 1);
        } else {
            int pins = c - '0';
            score += pins;
            if (pins < 10) {
                s.erase(0, 1);
                if (!s.empty() && s[0] == '/') {
                    score += 10 - (stoi(s.substr(0, s.find('/'))) + stoi(s.substr(s.find('/'), 2)));
                    frame++;
                    s.erase(0, s.find('/') + 1);
                }
            } else {
                frame++;
            }
        }
    }
    return score;
}