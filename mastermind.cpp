#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
            code[i] = ' ';
            guess[i] = ' ';
        }
    }

    // Count white pegs
    std::vector<char> codeCopy(code.begin(), code.end());
    for (int i = 0; i < 4; ++i) {
        if (&*std::find_first_of(&*codeCopy.begin(), &*codeCopy.end(), guess[i]) != &*codeCopy.end()) {
            whitePegs++;
            auto it = std::remove(&*codeCopy.begin(), &*codeCopy.end(), guess[i]);
            codeCopy.erase(it, codeCopy.end());
        }
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