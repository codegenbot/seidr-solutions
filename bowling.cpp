int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (lastRoll ? 10 : 0);
            lastRoll = true;
        } else if (c == '/') {
            score += 10 - (stoi(s.substr(0, s.find('/'))) + stoi(s.substr(s.find('/') + 1, 1)));
            lastRoll = false;
            s.erase(0, s.find('/'));
        } else {
            int roll = c - '0';
            if (!lastRoll) score += roll;
            else score += (10 - roll);
            lastRoll = true;
        }
    }
    return score;
}