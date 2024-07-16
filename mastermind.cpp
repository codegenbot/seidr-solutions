#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong places (white pegs)
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    // Count the number of correct colors in correct positions (black pegs)
    for(int i = 0; i < 6; i++) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            if(code[j] == std::string(1, (char)i)) {
                count++;
            }
        }
        if(count == 1) {
            black++;
        }
    }

    // Count the number of correct colors in wrong places but not in code (white pegs)
    for(int i = 0; i < 6; i++) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            if(guess[j] == std::string(1, (char)i)) {
                count++;
            }
        }
        if(count > 1) {
            white += count - 1;
        }
    }

    return black << 2 | white;
}

int main() {
    std::cout << mastermind("RRRR", "RRRR") << std::endl; // Output: 0
    std::cout << mastermind("BOYG", "GYOB") << std::endl; // Output: 4
    std::cout << mastermind("WYYW", "BBOG") << std::endl; // Output: 0
    std::cout << mastermind("GGGB", "BGGG") << std::endl; // Output: 2
    std::cout << mastermind("BBBB", "OOOO") << std::endl; // Output: 0
    return 0;
}