Here's the modified code:

```cpp
#include <string>

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    for (int frame = 1; frame <= 10; frame++) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s.substr(i, 2) == "X/") {
            score += 20;
            i += 2;
        } else if (s[i] == '/') {
            int left = s[i-1] - '0';
            int right = s[i+1] - '0';
            score += left + right;
            i++;
        } else {
            int count = s[i] - '0';
            for (int j = 0; j < count; j++) {
                if (s[i+1] == 'X') {
                    score += 10 + 10;
                    i += 2;
                    break;
                } else if (s[i+1] == '/') {
                    int left = s[i+2] - '0';
                    int right = s[i+3] - '0';
                    score += 10 + left + right;
                    i += 3;
                    break;
                }
            }
        }
    }
    return score;
}