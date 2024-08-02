int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            string first = s.substr(0, i);
            string second = s.substr(i + 1);
            if (first[0] == 'X') {
                score += 30;
            } else if (stoi(first) < 10) {
                score += stoi(first);
            } else {
                int spare = 10 - (stoi(first.substr(0, 1)) - '0');
                score += 10 + spare;
            }
            if (second[0] == 'X') {
                score += 30;
            } else if (stoi(second) < 10) {
                score += stoi(second);
            } else {
                int bonus = 10 - (stoi(second.substr(0, 1)) - '0');
                score += 10 + bonus;
            }
        } else {
            if (s[i] == 'X') {
                score += 30;
            } else {
                score += stoi(string(1, s[i])) + score + 1;
            }
        }
    }
    return score;
}