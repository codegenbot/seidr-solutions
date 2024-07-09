```cpp
#include <string>
#include <sstream>

int bowlingScore(std::string s) {
    int score = 0;
    std::istringstream iss(s);
    char c;

    int currentRoll1 = 0;
    int currentRoll2 = 0;
    while (iss >> c) {
        if (c == 'X') {
            score += 30;
            if (currentRoll1 > 0 || currentRoll2 > 0) { 
                score -= 10; 
            }
        } else if (c == '/') {
            score += currentRoll1 + 10;
            currentRoll1 = 0;
            currentRoll2 = 0;
        } else {
            int roll = c - '0';
            if (currentRoll1 > 0) { 
                currentRoll2 = roll;
            } else { 
                currentRoll1 = roll;
            }
            if (iss.peek() == '/' || iss.peek() == 'X') {
                score += roll * 2; 
            } else {
                score += roll;
            }
        }
    }

    if (currentRoll1 > 0) {
        if (currentRoll1 + currentRoll2 >= 10) { 
            score += 10;
            if (currentRoll1 + currentRoll2 == 10) {
                score += currentRoll1; 
            } else {
                score += currentRoll1 + currentRoll2; 
            }
        } else { 
            score += 10;
            if (currentRoll1 == 9) {
                score += 1 * 2; 
            } else {
                score += 10 + currentRoll1 * 2; 
            }
        }
    }

    return score;
}

int main() {
    std::string s = "X/X/5-4/10/-9/-8/X/X/6+3/7-2";
    int result = bowlingScore(s);
    return result;
}