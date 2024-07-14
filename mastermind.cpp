#include <iostream>
#include <string>

int mastermind(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            for (char c : code[i]) {
                if (std::count(&guess[0], &guess[0] + 4, c) > 0) {
                    ++whitePegs;
                }
            }
        }
    }

    return blackPegs * 2 + whitePegs;
}

int main() {
    std::string code = "abcD";
    std::string guess = "aBcd";
    int result = mastermind(code, guess);
    std::cout << "Black pegs: " << (result / 2) << ", White pegs: " << (result % 2) << std::endl;
}