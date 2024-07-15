int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            score += 10 - (stoi(s.substr(i + 1, 2)) * 10);
            i += 3;
        } else {
            int frameScore = stoi(s.substr(i, 1));
            if (frameScore < 10) {
                score += frameScore;
                i++;
            } else {
                score += 10;
                i++;
            }
        }
    }
    return score;
}