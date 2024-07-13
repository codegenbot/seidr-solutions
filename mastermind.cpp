#include <string>
#include <iostream>

int mastermind(const std::string& code, const std::string& guess) {
    int black = 0;
    int white = 0;

    // Count correct positions (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count correct colors (white pegs)
    for (int i = 0; i < 4; ++i) {
        size_t pos = guess.find(code.substr(i, 1));
        if (pos != std::string::npos) {
            white++;
        }
    }

    return black + white;
}

int main() {
    std::string code, guess;
    std::cout << "Enter the Mastermind code: ";
    std::cin >> code;
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    int result = mastermind(code, guess);
    std::cout << "Black pegs: " << (result - (result > 0)) << "\n";
    std::cout << "White pegs: " << result - (result - (result > 0)) << "\n";
    return 0;
}