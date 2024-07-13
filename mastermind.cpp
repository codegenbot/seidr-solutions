#include <vector>
#include <iostream>
#include <string>

int whitePegs(const std::string& code, const std::string& guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(const std::string& code, const std::string& guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code.find(guess[i]) != std::string::npos && code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

std::pair<int, int> mastermind(const std::string& code, const std::string& guess) {
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    return std::make_pair(4 - white, black);
}

int main() {
    std::cout << "Enter Mastermind code: ";
    std::string code;
    std::cin >> code;

    std::cout << "Enter guess: ";
    std::string guess;
    std::cin >> guess;

    auto [white, black] = mastermind(code, guess);
    std::cout << white << "\n" << black << "\n";
    return 0;
}