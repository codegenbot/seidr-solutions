```c++
#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // Strike
            score += 10;
            if (i < 9)
                score += getBonus(s.substr(i+1));
        } else if (s[i] == '/') { // Spare
            score += 5;
            score += getRoll(s.substr(i+1));
        } else { // Normal roll
            int roll = s[i] - '0';
            if (i < 8 && s[i+1] != '/') {
                int next = s[i+1] - '0';
                score += roll + next;
            } else {
                score += roll;
            }
        }
    }

    return score;
}

int getRoll(string s) {
    int score = 0;
    bool bonus = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') { // Strike
            score += 10;
            bonus = true;
        } else if (s[i] == '/') { // Spare
            score += 5;
            break;
        } else { // Normal roll
            score += s[i] - '0';
        }
    }

    if (bonus)
        score += getRoll(s.substr(1));

    return score;
}