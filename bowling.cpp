```c++
int calculateBowlingScore(const char* s) {
    int score = 0;
    int currentRoll = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'X') {
            { // Corrected here
                score += 30;
                currentRoll++;
            }
        } else if (s[i] == '/') {
            {
                score += 10 + currentRoll;
                if (currentRoll > 0) {
                    if (i+1 < strlen(s)) { // Corrected out of bounds check
                        int bonus = s[i+1] - '0' + s[i+2] - '0';
                        score += bonus;
                        i++; // Corrected here
                    }
                }
            }
        } else {
            int roll = s[i] - '0';
            { // Corrected here
                score += roll;
                currentRoll++;
                if (currentRoll == 2) {
                    if (i-1 >= 0 && s[i-1] == '/') { // Corrected out of bounds check
                        { // Corrected here
                            score += roll * 2;
                        }
                    } else {
                        { // Corrected here
                            score += roll * 2;
                            currentRoll = 0;
                        }
                    }
                }
            }
        }
    }
    return score; // Corrected here
}