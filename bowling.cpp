int bowlingScore(string s) {
    int score = 0;
    int prevFrame = -1; // 0-10 frame numbers
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            int thisRoll = c - '0';
            if (prevFrame == 9) { // last frame is special: either two rolls or strike
                score += thisRoll;
                return score; // return early for the last frame
            }
            else if (thisRoll == 10) { // spare in any frame except the last one
                score += 10 + 2;
                prevFrame++;
            }
            else {
                score += thisRoll;
                prevFrame++;
            }
        }
        else if (c == '/') { // strike in any frame except the last one
            score += 10 + 2;
            prevFrame++;
        }
        else { // strike at any position, including the last one
            score += 10;
            if (prevFrame == 9) return score; // return early for the last frame
            prevFrame++;
        }
    }
    return score;
}