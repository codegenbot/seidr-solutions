#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    string bonusStr;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // Strike
            score += 10;
            bonusStr = s.substr(i+1);
        } else if (s[i] == '/') { // Spare
            score += 5;
            bonusStr = s.substr(i+1, 2);
        } else { // Normal roll
            int roll1 = s[i] - '0';
            if (i < 8 && s[i+1] != '/') {
                int roll2 = s[i+1] - '0';
                score += roll1 + roll2;
            } else {
                score += roll1;
            }
        }

        if (bonusStr.size() > 0) {
            int bonus = 0;
            for (int j = 0; j < bonusStr.size(); j++) {
                if (bonusStr[j] == 'X') { // Strike
                    bonus += 10;
                } else if (bonusStr[j] == '/') { // Spare
                    bonus += 5;
                } else { // Normal roll
                    bonus += bonusStr[j] - '0';
                }
            }
            score += bonus;
        }
    }

    return score;
}