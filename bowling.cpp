Here is the solution:

int bowlingScore(string s) {
    int score = 0;
    int prevRoll = 0;
    for (char c : s) {
        if (c == '/') {
            int thisRoll = max(1, min(10, stoi(string({c-48})));
            if (prevRoll + thisRoll >= 10) {
                score += 10 - prevRoll;
                score += thisRoll;
            } else {
                score += prevRoll + thisRoll;
            }
            prevRoll = 0;
        } else {
            prevRoll += c - 48;
        }
    }
    if (prevRoll > 0) score += prevRoll;
    return score;