#include <vector>
#include <iostream>
#include <string>

int getMastermindClue(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            // Correct color and correct place, so it's a black peg
            blackPegs++;
        } else {
            bool foundInCode = false;
            bool foundInGuess = false;

            for (int j = 0; j < 4; ++j) {
                if (code[i] == guess[j]) {
                    foundInCode = true;
                    break;
                }
            }

            for (int j = 0; j < 4; ++j) {
                if (guess[i] == code[j]) {
                    foundInGuess = true;
                    break;
                }
            }

            // If the character is not in the correct position and it's also not in the code, then it's a white peg
            if (!foundInCode && !foundInGuess) {
                whitePegs++;
            }
        }
    }

    return {blackPegs, whitePegs};
}

int main() {
    std::string code;
    std::cout << "Enter the Mastermind code: ";
    std::cin >> code;

    std::string guess;
    std::cout << "Enter your guess: ";
    std::cin >> guess;

    int blackPegs, whitePegs;
    std::tie(blackPegs, whitePegs) = getMastermindClue(code, guess);

    std::cout << "Black pegs: " << blackPegs << "\n";
    std::cout << "White pegs: " << whitePegs << "\n";

    return 0;
}