#include <iostream>
#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { 
            score += 10 + getBonus(s, i);
        } else if (s[i] == '/') { 
            score += 5 + getBonus(s, i);
        } else { 
            int roll1 = s[i] - '0';
            if (i < 8 && s.substr(i+1, 1) != "/") {
                string temp = s.substr(i+1, 1);
                int roll2 = temp[0] - '0';
                score += roll1 + roll2;
            } else {
                score += roll1;
            }
        }
    }

    return score;
}

int getBonus(string s, int i) {
    int bonus = 0;
    for (int j = i + 1; j < 11; j++) {
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