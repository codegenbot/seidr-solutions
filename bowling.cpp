#include <string>
#include <iostream>

int bowlingScore(std::string s) {
    int score = 0;
    int currentRoll1 = 0;
    int currentRoll2 = 0;
    bool strike = false;
    
    for (char c : s) {
        if (c == '/') {
            if (!strike) {
                if (currentRoll1 + currentRoll2 < 10) {
                    score += 10 - (currentRoll1 + currentRoll2);
                } else {
                    score += 10;
                }
            } else {
                frameScore = 10;
                score += frameScore;
                strike = false;
            }
            currentRoll1 = 0;
            currentRoll2 = 0;
        } else if (c == 'X') {
            score += 10;
            strike = true;
            continue;
        } else {
            if (!strike) {
                currentRoll1++;
                if (currentRoll1 >= 10) {
                    if (currentRoll1 + currentRoll2 <= 10) {
                        score += 10 - currentRoll1;
                        currentRoll2++;
                    } else {
                        score += 10;
                        currentRoll1 = 0;
                    }
                } else {
                    currentRoll2++;
                }
            } else {
                currentRoll2++;
            }
        }
    }
    
    if (strike) {
        int bonusRoll1 = 0, bonusRoll2 = 0;
        for (char c : s.substr(s.find('/'))) {
            if (c == 'X') {
                score += 10 + bonusRoll1;
                return score;
            } else if (c == '/') {
                score += 10 + bonusRoll1;
                return score;
            } else {
                if (bonusRoll1 < 2) {
                    bonusRoll1++;
                } else {
                    bonusRoll1 = 0;
                    bonusRoll2++;
                }
            }
        }
    }
    
    return score;
}

int main() {
    std::string input = "X|X|7/4/3/X|8+6/5+5/9-"; // provide the string here
    int result = bowlingScore(input);
    std::cout << "The bowling score is: " << result << std::endl;
    return 0;
}