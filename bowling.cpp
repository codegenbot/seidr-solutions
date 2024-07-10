int bowlingScore(const std::string& input) {
    int score = 0;
    int rollCount1 = 0;
    int rollCount2 = 0;

    for (char c : input) {
        if (c == '/') {
            if (rollCount1 >= 10 || (rollCount1 + rollCount2 > 10)) {
                score += (max(0, 10 - rollCount1) + rollCount2) * 10;
            } else {
                score += rollCount1 + rollCount2;
            }
            rollCount1 = rollCount2 = 0;
        } else if ('1' <= c && c <= '9') {
            rollCount1 *= 10 + (c - '0');
        } else if (c == 'X') {
            score += 30;
            rollCount1 = 10;
        }
    }
    return score;
}