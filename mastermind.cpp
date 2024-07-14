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
            whitePegs++;
        }
    }

    return blackPegs + whitePegs;
}

int main() {
    const char* code = "????";  
    const char* guess = "????";  

    int result = mastermind(code, guess);
    std::cout << "White pegs: " << (result - 4) << ", Black pegs: " << 4 - (result - 4) << std::endl;

    return 0;
}