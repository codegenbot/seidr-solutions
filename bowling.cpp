```cpp
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // strike
            score += 10 + (i < 9 ? 10 : 0);
        } else if (s[i] == '/') { // spare
            int roll1, roll2;
            if (i == 0) {
                roll1 = s[1] - '0';
                roll2 = s[2] - '0';
            } else {
                roll1 = s[i - 1] - '0';
                roll2 = s[i + 1] - '0';
            }
            score += 10 + roll1 + roll2;
        } else {
            int roll1, roll2;
            roll1 = s[i] - '0';
            if (s[i + 1] == '/') {
                roll2 = 10 - roll1;
            } else {
                roll2 = s[i + 1] - '0';
            }
            score += roll1 + roll2;
        }
    }
    return score;
}