#include <tuple>
#include <vector>
#include <iostream>
#include <string>

std::tuple<int, int> mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    std::vector<int> codeCount(6, 0);
    std::vector<int> guessCount(6, 0);

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }

    int white = 0;
    for (int i = 0; i < 4; i++) {
        bool foundInCode = false;
        for (char c : code) {
            if (c == guess[i]) {
                foundInCode = true;
                break;
            }
        }
        if (!foundInCode) {
            white++;
        }
    }

    return std::make_tuple(white, black);
}

int main() {
    std::string code = "ABCD";
    std::string guess = "ABDE";
    auto [white, black] = mastermind(code, guess);
    std::cout << "White pegs: " << white << ", Black pegs: " << black << std::endl;
    return 0;
}