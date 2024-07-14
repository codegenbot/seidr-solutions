```cpp
#include <iostream>

int mastermind(const char* code, const char* guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    for (int i = 0; i < 4; i++) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (guess[j] == code[i] && j != i) {
                whitePegs++;
                found = true;
                break;
            }
        }
        if (!found) {
            for (int j = 0; j < 4; j++) {
                if (code[j] == guess[i]) {
                    blackPegs++;
                    found = true;
                    break;
                }
            }
        }
    }

    return blackPegs + whitePegs;
}

int main() {
    const char* code = "abcD";
    const char* guess = "aBcd";
    int result = mastermind(code, guess);
    std::cout << "Black pegs: " << (result / 2) << ", White pegs: " << (result % 2) << std::endl;
    return 0;
}