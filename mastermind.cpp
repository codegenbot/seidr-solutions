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
        int j = 0;
        while (j < 4) {
            if (code[j] == guess[i]) {
                if (j == i) {
                    black++;
                } else {
                    white++;
                }
                code[j] = ' ';  // mark as used
                break;
            }
            j++;
        }
    }

    return black + white; // Return the sum of both.
}

int main() {
    std::string code, guess;
    // Ask for input from user
    std::cout << "Enter your Mastermind code: ";
    std::cin >> code;
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    
    int result = mastermind(code, guess);
    std::cout << "Number of white pegs and black pegs are " << result << std::endl;

    return 0; 
}