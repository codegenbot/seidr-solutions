#include <vector>
#include <iostream>
#include <string>

std::pair<int, int> mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong positions (white pegs)
    for(int i = 0; i < 4; ++i) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    // Count the number of correct colors in right positions (black pegs)
    for(int i = 0; i < 6; ++i) {
        int count = 0;
        for(int j = 0; j < 4; ++j) {
            if(code[j] == std::string(1, (char)(i + 'A')) && guess[j] == std::string(1, (char)(i + 'A'))) {
                count++;
            }
        }
        white += (count - 1);
    }

    // Subtract the black pegs from total white pegs
    white -= black;

    return std::pair<int, int>(white, black);
}

int main() {
    std::string code, guess;
    std::cout << "Enter Mastermind code: ";
    std::cin >> code;
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    std::pair<int, int> result = mastermind(code, guess);
    std::cout << "White pegs: " << result.first << "\n";
    std::cout << "Black pegs: " << result.second << "\n";
    return 0;