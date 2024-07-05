```cpp
#include <iostream>
using namespace std;

int bowlingScore(const char* s) {
    int score = 0;
    int currentRoll = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'X') {
            score += 30;
            currentRoll++;
        } else if (s[i] == '/') {
            score += 10 + currentRoll;
            currentRoll = 0;
        } else {
            int roll = s[i] - '0';
            score += roll;
            currentRoll++;
            if (currentRoll == 2) {
                score += roll * 2;
                currentRoll = 0;
            }
        }
    }
    return score;
}

int main() {
    const char* input = "X/X || 3/5 1/9 X 2/- 8/3 5/7 X 3/6 -/- 1/4";
    std::cout << bowlingScore(input) << std::endl;
    return 0;
}