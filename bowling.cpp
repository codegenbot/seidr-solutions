#include <vector>
#include <iostream>

int bowlingScore(std::vector<int>& s) {
    int score = 0;
    int roll = 0;
    for (int c : s) {
        if (c == -1) {
            if (roll < 2) {
                score += 10 - (10 - roll);
            }
            roll = 0;
        } else if (c > 0) {
            roll++;
        } else if (c == 10) {
            score += 10;
            roll = 0;
        }
    }
    if (roll < 2) {
        if (roll == 1)
            score += roll * 10;
        else
            score += 10 + (roll - 2) * 10 / 3;
    }
    return score;
}

int main() {
    std::vector<int> s = {1, 4, -1, 2, 7, 3, -1, 1, 5, 8, 1, 9};
    std::cout << "The bowling score is: " << bowlingScore(s) << std::endl;
    return 0;
}