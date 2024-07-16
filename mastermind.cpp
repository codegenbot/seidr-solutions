```cpp
#include <tuple>
#include <vector>
#include <iostream>
#include <string>

std::tuple<int, int> mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        bool inCode = false;
        int codeIndex = -1; // index of the character in the code

        for (int j = 0; j < 4; j++) {
            if (guess[i] == code[j]) { 
                inCode = true;
                if (j == i) { 
                    codeIndex = j;
                }
            }
        }

        if (inCode) {
            if (codeIndex != -1 && codeIndex == i) { // correct position
                black++;
            } else { // correct color, wrong position
                white++;
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