```c++
#include <tuple>
#include <vector>
#include <iostream>
#include <string>

std::tuple<int, int> mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            bool foundInCode = false;
            for (int j = 0; j < 4; j++) {
                if (guess[i] == code[j] && !foundInCode) {
                    white++;
                    foundInCode = true;
                }
            }
        }
    }

    return std::make_tuple(white, black);
}

int main() {
    std::string code = "RGOR";
    std::string guess = "BRBB";
    auto [white, black] = mastermind(code, guess);
    std::cout << "White pegs: " << white << ", Black pegs: " << black << std::endl;
    return 0;
}