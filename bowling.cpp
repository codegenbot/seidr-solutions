int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            continue;
        } else {
            string frame = s.substr(i, 2);
            int strikeOrSpare = stoi(frame);
            if (strikeOrSpare == 10) {
                score += 10 + bowlingScore(s.substr(i+1));
            } else if (strikeOrSpare < 10) {
                score += strikeOrSpare;
                i++;
            }
        }
    }
    return score;
}