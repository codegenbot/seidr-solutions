```cpp
#include <string>

int bowlingScore(std::string& s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += 10 + (s[i+1] - '0');
            i++;
        } else {
            int sum = s[i] - '0';
            if (i < 8 && s[i+1] != '/') {
                sum += s[i+1] - '0';
            }
            if (sum == 10) {
                score += 10;
            } else {
                score += sum;
            }
        }
    }
    return score;
}