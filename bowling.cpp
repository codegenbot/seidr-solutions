```cpp
int bowlingScore(string s) {
    int score = 0;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { 
            score += 10 + getBonus(s, i);
        } else if (s[i] == '/') { 
            score += 5 + getBonus(s, i);
        } else { 
            int roll = s[i] - '0';
            if (i < 8 && s[i+1] != '/') {
                score += roll + (s[i+1] - '0');
            } else {
                score += roll;
            }
        }
    }

    return score;
}

int getBonus(string s, int i) {
    int bonus = 0;

    for (int j = i + 1; j < i + 3; j++) { 
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