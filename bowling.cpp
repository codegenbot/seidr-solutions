int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + 10; // strike, add 10 and next roll's value
            frame++;
        } else if (c == '/') {
            score += 10; // spare, add 10 and current roll's value
            frame++;
        } else {
            int val = c - '0'; // convert char to integer
            score += val;
            frame++;
            if (frame < 10) { // check for next roll in the same frame
                if (s[frame * 2] == 'X' || s[frame * 2] == '/') {
                    score += 10; // add 10 for strike or spare
                } else {
                    int nextVal = s[frame * 2] - '0';
                    score += nextVal;
                }
            }
        }
    }
    return score;
}