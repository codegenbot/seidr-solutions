#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors but wrong places (white pegs)
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code[i] = '-';  // Mark as used
            guess[i] = '-';
        }
    }

    // Count the number of correct colors and correct places (black pegs)
    for(int i = 0; i < 4; i++) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            if(code[i] == guess[j] && code[i] != '-') {
                count++;
            }
        }
        if(count > 0) {
            black -= count - 1;
            white += count - 1;
        }
    }

    return std::make_pair(white, black).second; // Return the number of white pegs
}

int main() {
    std::string code, guess;
    std::cout << "Enter the Mastermind code: ";
    std::cin >> code;
    std::cout << "Enter your guess: ";
    std::cin >> guess;

    int result = mastermind(code, guess);
    std::cout << "White pegs: " << (result == 0 ? 0 : 4 - result) << "\n";
    std::cout << "Black pegs: " << result << "\n";

    return 0;
}