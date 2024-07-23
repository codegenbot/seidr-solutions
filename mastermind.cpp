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
        for (char d : guess) {
            if (c == d && d != c) {
                count++;
                correctColors.insert(d);
            }
        }
    }

    // Count white pegs now
    int white = 0;
    for (char c : guess) {
        if (!code.count(c)) continue;
        for (int i = 0; i < 4; ++i) {
            if (guess[i] == c && code[i] != c) {
                white++;
            }
        }
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