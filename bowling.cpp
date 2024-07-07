```cpp
int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // strike
            score += 10 + (i < 9 ? 10 : 0);
        } else if (s[i] == '/') { // spare
            roll1 = s[i - 1] - '0';
            roll2 = s[i + 1] - '0';
            score += 10 + roll1 + roll2;
        } else {
            roll1 = s[i] - '0';
            if (s[i + 1] == '/') { // spare
                roll2 = s[i + 2] - '0';
                score += 10 + roll1;
            } else {
                roll2 = s[i + 1] - '0';
                score += roll1 + roll2;
            }
        }
    }
    return score;
}