#include <vector>
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong positions
    vector<char> code_chars(code.begin(), code.end());
    for (char c : guess) {
        if (code_chars.count(c)) {
            code_chars.erase(std::remove(code_chars.begin(), code_chars.end(), c), code_chars.end());
            white++;
        }
    }

    // Count the number of correct colors in correct positions
    vector<char> remaining_code_chars(code_chars.begin(), code_chars.end());
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            remaining_code_chars.erase(std::remove(remaining_code_chars.begin(), remaining_code_chars.end(), code[i]), remaining_code_chars.end());
        }
    }

    return {black, white};
}