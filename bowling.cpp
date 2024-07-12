```cpp
#include <string>
using namespace std;

int bowling(string s) {
    int score = 0;
    bool lastRoll = false;

    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            score += 10 - (i + 1);
            lastRoll = true;
        } else if (lastRoll) {
            score += s[i] - '0';
        } else {
            int roll = 0;
            for (int j = i; j < s.size() && j-i+1 <= s[j] - '0'; j++) {
                roll = roll * 10 + (s[j] - '0');
            }
            if (roll == 10) {
                score += 10;
            } else {
                score += roll;
            }
        }
    }

    return score;
}