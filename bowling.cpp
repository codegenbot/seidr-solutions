#include <iostream>
#include <string>

int bowlingScore(string input) {
    int score = 0;
    for (char c : input + "+") {
        if (c == 'X') {
            score += 30;
        } else if (c == '-') {
            continue;
        } else {
            int roll = c - '0';
            score += (roll * 2);
        }
    }
    return score;
}

int main() {
    std::cout << bowlingScore("X|---5-8-|X||25--|-1-3-4-6-8-9-7");
}