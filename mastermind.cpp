```cpp
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

    int code_counts[6] = {0};  // Assuming 6 possible characters in your Mastermind game
    for (int i = 0; i < 4; ++i) {
        code_counts[guess[i] - 'A']++;  // Count occurrences of each character in the guess
    }

    // Count correct colors (white pegs)
    for (int i = 0; i < 4; ++i) {
        if (code_counts[code[i] - 'A'] > 0) {
            white++;
            code_counts[code[i] - 'A']--;
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