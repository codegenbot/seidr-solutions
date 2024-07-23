#include <string>
#include <iostream>
#include <set>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count black pegs first
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Create a set to keep track of correct colors (wrong place)
    std::set<char> correctColors;

    for (char c : code) {
        int count = 0;
        for (int i = 0; i < 4; ++i) {
            if (c == guess[i] && c != code[i]) {
                count++;
                correctColors.insert(c);
            }
        }
    }

    // Count white pegs now
    for (char c : code) {
        int count = 0;
        for (int i = 0; i < 4; ++i) {
            if (c == guess[i]) {
                count++;
            }
        }
        white += count;
    }

    return black + white;

}

int main() {
    std::string code, guess;
    std::getline(std::cin, code);
    std::getline(std::cin, guess);
    std::cout << mastermind(code, guess) << std::endl;
    return 0;
}