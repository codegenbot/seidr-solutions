```cpp
int bowlingScore(string s) {
    int score = 0;
    int nextRoll = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            if (nextRoll > 9)
                score += 10;
            else
                score += nextRoll;
            nextRoll = 0;
        } else if (isdigit(s[i])) {
            nextRoll *= 10;
            nextRoll += s[i] - '0';
        }
    }

    if (nextRoll > 0)
        score += nextRoll;

    return score;
}