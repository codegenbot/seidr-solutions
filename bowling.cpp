#include <vector>
#include <iostream>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    for (char c : input) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 - (frame < 10 ? stoi(string(1, c)) : 0);
            frame++;
        } else {
            int pins = 10 - stoi(string(1, c));
            score += pins;
            frame++;
            if (pins != 10) {
                score += stoi(string(1, c));
                frame++;
            }
        }
    }
    return score;
}

int main() {
    std::string input;
    std::cout << "Enter the bowling game scores: ";
    std::cin >> input;
    int result = bowlingScore(input);
    std::cout << "The total score is: " << result << std::endl;
    return 0;
}