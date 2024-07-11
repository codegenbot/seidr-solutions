```cpp
int bowlingScore() {
    int score = 0;
    std::string s = "X|7/6|8-3|5|-1|9-1|7|-4|0|10"; 
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int roll1 = s[i] - '0';
            if (i < 8 && s[i + 1] == '/') {
                int roll2 = s[i + 2] - '0';
                score += roll1 + roll2;
            } else {
                score += roll1 * 2;
            }
        } else {
            int roll1 = s[i] - '0';
            if (i < 9) {
                int roll2 = s[i + 1] - '0';
                score += roll1 + roll2;
            } else {
                score += roll1;
            }
        }
    }
    return score;