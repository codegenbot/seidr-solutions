#include <cctype>
#include <string>

int bowlingScore(const std::string& s) {
    int score = 0;
    int currentRoll = 0;

    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];
        
        if (c == 'X') {
            score += 10;
            currentRoll = 0;
        } else if (c == '/') {
            score += currentRoll + 5;
            currentRoll = 0;
        } else {
            if (currentRoll > 9) { 
                if (std::isdigit(c)) {
                    int firstRoll = c - '0';
                    score += firstRoll;
                    if (s.find('/', i) < s.size()-1) {
                        currentRoll = 10 - c;
                    } else {
                        currentRoll = 20 - c;
                    }
                } else {
                    currentRoll *= 10;
                    currentRoll += c - '0';
                }
            } else {
                if (std::isdigit(c)) {
                    currentRoll *= 10;
                    currentRoll += c - '0';
                } else {
                    currentRoll *= 10;
                    currentRoll += c - '0';
                }
            }
        }
    }

    return score;