#include <iostream>
#include <string>

int solve(const std::string& code, const std::string& guess) {
    int white = 0;
    int black = 0;

    for (char c : guess) {
        bool foundInCode = false;
        for (char d : code) {
            if (c == d && !foundInCode) {
                foundInCode = true;
                if ((code.find(d) + 1) > (guess.find(c) + 1)) {
                    black++;
                } else {
                    white++;
                }
            }
        }
    }

    return std::make_pair(white, black).second; // Return the number of black pegs
}

int main() {
    std::string code;
    std::cout << "Enter Mastermind code: ";
    std::cin >> code;

    std::string guess;
    std::cout << "Enter Mastermind guess: ";
    std::cin >> guess;

    int result = solve(code, guess);
    std::cout << "Black pegs: " << result << std::endl;

    return 0;
}