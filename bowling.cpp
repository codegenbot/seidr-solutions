```c++
#include <string>

int main() {
    std::string s = "X/X XXX X/8-7 X";
    int result = bowlingScore(s);
    return 0;
}

int bowlingScore(std::string input) {
    int score = 0;
    int currentRoll = 0;

    for (char c : input) {
        if (c == 'X') {
            score += 30;
            currentRoll = 0;
        } else if (c == '/') {
            score += currentRoll + 10;
            currentRoll = 0;
        } else if (c >= '0' && c <= '9') {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }

    return score; 
}