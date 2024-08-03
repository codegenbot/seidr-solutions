int bowlingScore(string s) {
    int score = 0;
    bool firstRollInFrame = true;
    for (char c : s) {
        if (c == 'X') { // strike in this frame
            score += 10 + nextTwoFrames(s);
            continue;
        }
        else if (c == '/') { // spare in this frame
            score += 10 - firstRollInFrame;
            firstRollInFrame = false;
            continue;
        }
        int roll = c - '0';
        score += roll;
        firstRollInFrame = false;
    }
    return score;
}

int nextTwoFrames(string s) {
    for (int i = 1; i <= 2; i++) {
        if (s.size() < i + 2)
            break;
        if (s[s.size() - i - 2] == 'X') // strike in the next frame
            return 10 + nextTwoFrames(s);
        else if (s[s.size() - i - 2] == '/') // spare in the next frame
            return 10 - s[s.size() - i - 1] - '0';
    }
    return 0;
}