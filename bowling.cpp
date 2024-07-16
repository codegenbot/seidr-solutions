#include <string>
using namespace std;

int getBonus(string s) {
    int bonus = 0;
    int roll1, roll2;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') { 
            bonus += 10 + getBonus(s.substr(i+1));
        } else if (s[i] == '/') { 
            roll1 = s[i-1] - '0';
            roll2 = s[i+1] - '0';
            bonus += roll1 + roll2;
            break;
        } else { 
            roll1 = s[i] - '0';
            if (i < s.size() - 1) {
                if (s[i+1] == '/') continue;
                roll2 = s[i+1] - '0';
                bonus += roll1 + roll2;
            } else {
                bonus += roll1;
            }
        }
    }

    return bonus;
}

int bowlingScore(string s) {
    int score = 0;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { 
            score += 10 + getBonus(s.substr(i+1));
        } else if (s[i] == '/') { 
            score += 5 + getBonus(s.substr(i+1));
        } else { 
            int roll1 = s[i] - '0';
            if (i < 8 && s[i+1] != '/') {
                int roll2 = s[i+1] - '0';
                score += roll1 + roll2;
            } else {
                score += roll1;
            }
        }
    }

    return score;
}