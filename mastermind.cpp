```c++
#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    // Count black pegs (correct color and correct place)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    // Count white pegs (correct color, wrong place)
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

int main() { std::cout << mastermind("XXXX", "XXXX"); return 0; }