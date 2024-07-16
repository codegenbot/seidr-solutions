#include <string>

int bowlingScore(const std::string& s) {
    int score = 0;
    int currentRoll = 0;
    for (auto it = s.begin(); it != s.end(); ++it) {
        char c = *it;
        if (c == 'X') {
            score += 30;
            currentRoll = 0;
        } else if (c == '/') {
            score += currentRoll + 10;
            currentRoll = 0;
        } else {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }
    return score;
}

int main() {
    std::string s = "X|7/6|5/4|3/2|1/0";
    int score = bowlingScore(s);
    return 0;
}