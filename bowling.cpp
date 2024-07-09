int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    int rollsInFrame = 0;

    std::string::iterator it = s.begin();
    while (it != s.end()) {
        if (*it == 'X') {
            // Strike
            score += 10 + (rollsInFrame > 1 ? roll : 10);
            rollsInFrame = 0;
            roll = 0;
            ++it; // Skip '/'
            if (it != s.end() && *it == 'X') {
                score += 10;
                it++; // Skip another 'X'
            } else {
                break;
            }
        } else if (*it == '/') {
            // Spare
            score += roll + 10;
            rollsInFrame = 0;
            roll = 0;
            ++it; // Skip '/'
            break;
        } else {
            int pin = *it - '0';
            roll = roll * 10 + pin;
            if (++rollsInFrame == 2) {
                score += roll;
                roll = 0;
            }
        }
    }
    return score;
}