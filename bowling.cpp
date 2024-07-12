int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 - (stoi(s.substr(frame * 2, 1)) + stoi(s.substr(frame * 2 + 1, 1)));
            frame++;
        } else {
            int points = 0;
            for (int i = 0; i < 3 && c != ' '; i++) {
                if (c == 'X') {
                    points += 10;
                    break;
                }
                points += (c - '0');
            }
            score += points;
            frame++;
        }
    }
    return score;
}