int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 - (roll % 2 ? 1 : 5);
            roll++;
        } else {
            int count = c - '0';
            while (count--) {
                if (c == 'X') {
                    score += 30;
                    roll++;
                    break;
                } else {
                    score += 10;
                    roll++;
                }
            }
        }
    }
    return score;
}