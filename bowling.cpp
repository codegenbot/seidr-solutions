int bowling(string s) {
    int score = 0;
    bool spare = false;
    int lastRoll = 0;

    for (char c : s) {
        if (c == '/') {
            spare = true;
        } else if (c == 'X') {
            score += 30;
            lastRoll = 10;
        } else if (c >= '1' && c <= '9') {
            int roll = c - '0';
            if (!spare) {
                score += roll;
            } else {
                spare = false;
            }
            if (lastRoll == 0) {
                lastRoll = roll;
            } else if (roll > 10 - lastRoll) {
                roll = 10 - lastRoll;
            }
        } else {
            // ignore non-digit characters
        }
    }

    return score;
}