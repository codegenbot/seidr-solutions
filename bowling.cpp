int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            score += min(stoi(s.substr(0, i)), 10);
            s = s.substr(i + 1);
            frame++;
        }
    }
    return score;
}