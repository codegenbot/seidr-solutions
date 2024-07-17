```cpp
#include <string>
#include <cctype>

int bowlingScore(const std::string& frames) {
    int score = 0;
    int currentRolls = 0;
    for (char c : frames) {
        if (c == 'X') {
            score += 30;
            currentRolls = 2;
        } else if (c == '/') {
            score += (10 - currentRolls);
            currentRolls = 0;
        } else if (std::isdigit(c)) {
            int roll = c - '0';
            currentRolls++;
            if (currentRolls == 2) {
                score += 1 * roll + 1 * (10 - roll);
            }
        }
    }
    return score;
}

int main() {
    std::string frames = "X/X/X/X/X/X/X/X/2/-5";
    int score = bowlingScore(frames);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}