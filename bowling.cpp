#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { 
            score += 10 + getBonus(s.substr(i+1));
        } else if (s[i] == '/') { 
            score += 5 + getBonus(s.substr(i+1));
        } else { 
            roll1 = s[i] - '0';
            if (i < 8 && s[i+1] != '/') {
                roll2 = s[i+1] - '0';
                score += roll1 + roll2;
            } else {
                score += roll1;
            }
        }
    }

    return score;
}

int getBonus(string s) {
    int bonus = 0;

    for (int j = 0; j < s.size(); j++) {
        if (s[j] == 'X') { 
            bonus += 10;
        } else if (s[j] == '/') { 
            bonus += 5;
        } else { 
            bonus += s[j] - '0';
        }
    }

    return bonus;