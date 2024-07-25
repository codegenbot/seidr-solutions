```cpp
#include <string>

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == 'X') {
            score += 10;
            i++;
            if (i < s.size() && s[i] != '/') {
                score += 10;
                i++;
            }
        } else if (s[i] - '0' + s[i+1] - '0' > 10) {
            int frame = 10;
            if (i+2 < s.size()) {
                frame = 10 - (s[i] - '0' + s[i+1] - '0');
            }
            score += frame;
            i+=2;
        } else {
            int frame = s[i] - '0' + s[i+1] - '0';
            score += frame;
            i+=2;
        }
    }
    return score;
}