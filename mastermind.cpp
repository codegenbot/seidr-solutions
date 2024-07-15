#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    std::vector<int> codeCount(6, 0);
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i] - 'A']++;
    }

    for (int i = 0; i < 4; ++i) {
        if (guess[i] != code[i]) {
            if (codeCount[guess[i] - 'A'] > 0) {
                whitePegs++;
                codeCount[guess[i] - 'A']--;
            }
        }
    }

    return blackPegs << 2 | whitePegs;
}

int main() {
    std::string code = "AAAA";
    std::string guess = "ABCD";

    int result = mastermind(code, guess);

    std::cout << "Black pegs: " << (result >> 2) << ", White pegs: " << result & 3 << std::endl;

    return 0;
}