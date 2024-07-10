#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
            code.erase(std::remove(&*code.begin() + i, &*code.end(), guess[i]), code.end());
            guess.erase(std::remove(&*guess.begin() + i, &*guess.end(), guess[i]), guess.end());
        }
    }

    // Count white pegs
    for (int i = 0; i < 4; ++i) {
        bool found = false;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i]) {
                found = true;
                code.erase(std::remove(&*code.begin() + j, &*code.end(), guess[i]), code.end());
                break;
            }
        }
        if (found)
            whitePegs++;
    }

    return blackPegs << 2 | whitePegs;
}

int main() {
    std::string code, guess;
    // Read input from user
    std::cout << "Enter the Mastermind code: ";
    std::cin >> code;
    std::cout << "Enter a guess: ";
    std::cin >> guess;

    int result = mastermind(code, guess);
    std::cout << result / 4 << "\n";
    std::cout << result % 4 << "\n";

    return 0;
}