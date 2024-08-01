```cpp
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            score += 10;
            i++;
            if (i >= s.length() || s[i] != '/') {
                break;
            }
            i++; // skip the '/'
        } else {
            int frame = s[i] - '0';
            if (s[i + 1] == 'X') {
                score += 10 + frame;
                i += 2;
            } else if (s[i + 1] == '/') {
                score += 10 + frame;
                i++; // skip the '/'
                i++; // skip the '/'
            } else {
                score += 10 + frame + s[i + 1] - '0';
                i++; // skip the first number
                i++; // skip the second number
            }
        }
    }
    return score;
}