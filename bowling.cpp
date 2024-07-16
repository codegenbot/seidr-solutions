#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll1 = 0;
    int roll2 = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            if ((roll1 + roll2) > 9)
                score += 10;
            else
                score += roll1 + roll2;
            roll1 = 0;
            roll2 = 0;
        } else if (isdigit(s[i])) {
            roll2 *= 10;
            roll2 += s[i] - '0';
            if (roll1 > 0) roll1++;
            else roll1 = s[i] - '0';
        }
    }

    if ((roll1 + roll2) > 9)
        score += 10;
    else
        score += roll1 + roll2;

    return score;
}