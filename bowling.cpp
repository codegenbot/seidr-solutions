#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    int nextRoll = 0;
    int spare = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            if (roll > 0)
                score += roll;
            else
                score += 10 + nextRoll;
            roll = 0;
            nextRoll = 0;
            spare = 0;
        } else if (isdigit(s[i])) {
            int temp = s[i] - '0';
            if (roll > 0) {
                roll *= 10;
                roll += temp;
            } else {
                if (nextRoll + temp >= 10 && spare == 0) {
                    nextRoll = temp;
                    spare = 1;
                } else
                    nextRoll += temp;
            }
        }
    }

    if (roll > 0)
        score += roll;

    return score;
}