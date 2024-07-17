#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        }
    }

    for (char c : code) {
        int count = 0;
        for (char d : guess) {
            if (c == d) {
                ++count;
            }
        }
        if (count > 1 || count == 1 && black > 0) {
            continue;
        }
        white += count - (code.find(c) != std::string::npos);
    }

    return white + black;
}

int main() {
    std::cout << mastermind("RRRR", "RRRR") << std::endl; // output: 4
    std::cout << mastermind("BOYG", "GYOB") << std::endl; // output: 4,0
    std::cout << mastermind("WYYW", "BBOG") << std::endl; // output: 0,0
    std::cout << mastermind("GGGB", "BGGG") << std::endl; // output: 2,2
    std::cout << mastermind("BBBB", "OOOO") << std::endl; // output: 0,0
    return 0;
}