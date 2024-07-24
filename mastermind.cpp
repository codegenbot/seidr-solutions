#include <vector>
#include <iostream>
#include <string>

int mastermindCode(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            // Correct color and correct place
            blackPegs++;
        } else {
            bool foundInCode = false;
            for (int j = 0; j < 4; ++j) {
                if (guess[i] == code[j]) {
                    foundInCode = true;
                    break;
                }
            }
            if (!foundInCode) {
                // Correct color, wrong place
                whitePegs++;
            }
        }
    }

    return {blackPegs, whitePegs};
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    auto [blackPegs, whitePegs] = mastermindCode(code, guess);
    std::cout << whitePegs << '\n' << blackPegs << '\n';
    return 0;
}