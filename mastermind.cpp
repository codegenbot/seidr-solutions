#include <iostream>
#include <string>
#include <map>

int mastermind(std::string code, std::string guess) {
    if (code.length() != 4 || guess.length() != 4) {
        return -1; 
    }

    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    std::map<char,int> codeCount;
    for (char c : code) {
        codeCount[c]++;
    }
    for (char c : guess) {
        if (std::string::npos != code.find(c) && codeCount[c] > 0) {
            white++;
            codeCount[c]--;
        }
    }

    return black + white;
}

int main() {
    std::string code = "XXXX"; 
    std::string guess = "XXXX"; 

    int result = mastermind(code, guess);

    std::cout << "Black pegs: " << (result - (result / 4)) << ", White pegs: " << result / 4 << std::endl;

    return 0;
}