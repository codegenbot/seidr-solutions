Here is the solution:

int bowlingScore(string str) {
    int score = 0;
    bool prevFrameWasStrike = false;
    for (char c : str) {
        if (c == 'X') {
            score += 10 + (prevFrameWasStrike ? 10 : 20);
            prevFrameWasStrike = true;
        } else if (c == '/') {
            int restOfFrame = 10 - ((str[str.size() - 1] - '0') + (str[str.size() - 2] - '0'));
            score += 10 + restOfFrame / 2;
            prevFrameWasStrike = false;
        } else if (isdigit(c)) {
            int pins = c - '0';
            if (prevFrameWasStrike) {
                score += pins;
            } else {
                score += pins * 2;
            }
            prevFrameWasStrike = false;
        }
    }
    return score;