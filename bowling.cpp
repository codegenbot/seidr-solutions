int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    while (frame < 10) {
        if (s[2 * frame] == '/' || s[2 * frame + 1] == 'X') {
            // Strike
            if (s[2 * frame] == '/') score += 10;
            else score += 10 + sumIntegers(s.substr(2 * frame + 2, 2));
            frame++;
        } else if ((s[2 * frame] - '0' + s[2 * frame + 1] - '0') >= 10) {
            // Spare
            score += 10;
            frame++;
        } else {
            // Normal roll
            int firstRoll = (s[2 * frame] - '0') * 10 + (s[2 * frame + 1] - '0');
            int secondRoll = (s[2 * frame + 3] - '0') * 10 + (s[2 * frame + 4] - '0');
            score += firstRoll;
            if (firstRoll + secondRoll < 10) {
                frame++;
            } else {
                score += secondRoll;
                frame++;
            }
        }
    }
    return score;
}

int sumIntegers(string s) {
    int result = 0;
    for (char c : s) {
        result = result * 10 + (c - '0');
    }
    return result;
}