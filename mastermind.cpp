#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        bool found = false;
        for (int i = 0; i < 4; ++i) {
            if (code[i] == c && !found) {
                found = true;
            } else if (code[i] == c) {
                break;
            }
        }
        if (!found) white++;
    }

    return black << 2 | white;
}

int main() {
    std::cout << mastermind("RRRR", "RRRR") << std::endl;  //0 4
    std::cout << mastermind("BOYG", "GYOB") << std::endl;   //4 0
    std::cout << mastermind("WYYW", "BBOG") << std::endl;   //0 0
    std::cout << mastermind("GGGB", "BGGG") << std::endl;   //2 2
    std::cout << mastermind("BBBB", "OOOO") << std::endl;   //0 0
    return 0;
}