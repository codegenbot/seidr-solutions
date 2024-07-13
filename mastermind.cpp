```cpp
#include <string>
#include <unordered_map>

int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    // Count correct positions (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count correct colors (white pegs)
    std::unordered_map<char, bool> code_counts;
    for (char c : code) {
        code_counts[c] = true;
    }

    int white_count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code_counts.find(guess[i]) != code_counts.end() && !code_counts[guess[i]]) {
            white_count++;
            code_counts[guess[i]] = false;
        }
    }

    white = white_count;

    return black + white;
}