```c++
#include <iostream>
#include <string>

int whitePegs(std::string code, std::string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return 4 - count;
}

int blackPegs(std::string code, std::string guess) {
    int count = 0;
    for(int i=0; i<6; i++) {
        int codeCount = 0;
        int guessCount = 0;
        for(int j=0; j<4; j++) {
            if(code[j] == i+'0' || code[j] == i+'A'-10) {
                codeCount++;
            }
            if(guess[j] == i+'0' || guess[j] == i+'A'-10) {
                guessCount++;
            }
        }
        if(codeCount > 0 && guessCount > 0) {
            count += std::min(codeCount, guessCount);
        }
    }
    return count;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    std::cout << whitePegs(code, guess) << std::endl;
    std::cout << blackPegs(code, guess) << std::endl;
    return 0;
}