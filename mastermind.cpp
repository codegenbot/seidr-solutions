#include <iostream>
#include <string>
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
    for (char c : correctColors) {
        int count = 0;
        for (int i = 0; i < 4; ++i) {
            if (c == guess[i]) {
                count++;
            }
        }
        white += count;
    }

    return white - black;

}

int main() {
    std::string code = "abc "; 
    std::string guess = "abcd"; 

    int result = mastermind(code, guess);
    std::cout << "Number of white pegs and black pegs: " << result << std::endl;

    return 0;
}