int bowlingScore(std::string s) {
    int score = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10 + score/10;
        } else {
            int roll = c - '0';
            if (currentRoll() < 2) {
                score += roll;
            } else {
                if (roll + currentScore()/10 >= 10) {
                    score += 10 + score/10;
                } else {
                    score += roll * 2;
                }
            }
        }
    }
    return score;

}

int currentRoll() {
    static int count = 0;
    return ++count;
}