```cpp
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
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }

    // Count white pegs
    for (int i = 0; i < 6; i++) {
        int minCount = std::min(codeCount[i], guessCount[i]);
        if (codeCount[i] > minCount) {
            white += codeCount[i] - minCount;
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