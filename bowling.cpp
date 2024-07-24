int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int nextTwo = stoi(s.substr(i + 1, 2));
            score += 10 + nextTwo;
            i++;
        } else {
            int thisRoll = stoi(s.substr(i, 2));
            if (thisRoll >= 10) {
                score += 10 + thisRoll - 10;
            } else {
                score += thisRoll;
            }
        }
    }
    return score;
}