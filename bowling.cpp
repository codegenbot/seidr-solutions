```
#include <iostream>
#include <string>

int bowlingScore(std::string s) {
    int score = 0;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { 
            int roll1 = 10;
            score += roll1 + getBonus(s, i);
        } else if (s[i] == '/') { 
            int roll1 = s[i-1] - '0';
            int roll2 = s[i+1] - '0';
            score += roll1 + roll2;
        } else { 
            int roll1 = s[i] - '0';
            int roll2 = s[i+1] - '0';
            if (i < 8 && s[i+2] != '/') {
                score += roll1 + roll2;
            } else {
                score += roll1;
            }
        }
    }

    return score;
}

int getBonus(std::string s, int i) {
    int bonus = 0;

    for (int j = i; j < s.length(); j++) {
        if (s[j] == 'X') { 
            bonus += 10;
        } else if (s[j] == '/') { 
            bonus += 5;
        } else { 
            bonus += s[j] - '0';
        }
    }

    return bonus;
}