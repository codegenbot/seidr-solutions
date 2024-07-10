#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' ';  // mark as used
            guess[i] = ' ';  // mark as used
        }
    }

    // Count the number of correct colors in right positions
    for (int i = 0; i < 4; ++i) {
        bool found = false;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i]) {
                code[j] = ' ';  // mark as used
                found = true;
                break;
            }
        }
        if (!found) black++;
    }

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        int j = 0;
        while (j < 4) {
            if (code[j] == guess[i]) {
                white++;
                code[j] = ' ';  // mark as used
                break;
            }
            j++;
        }
    }

    return black;
}

int main() {
    std::string code, guess;
    // Read input from user
    std::cout << "Enter the Mastermind code: ";
    std::cin >> code;
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    int result = mastermind(code, guess);
    std::cout << "The number of white pegs is 0 and black pegs are " << result << ".\n";
    return 0;
}