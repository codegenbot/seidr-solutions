#include <vector>
#include <iostream>
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong positions
    vector<char> code_chars(code.begin(), code.end());
    for (char c : guess) {
        if (code_chars.count(c)) {
            code_chars.erase(remove(code_chars.begin(), code_chars.end(), c), code_chars.end());
            white++;
        }
    }

    // Count the number of correct colors in correct positions
    int i = 0;
    while (i < 4) {
        if (guess[i] == code[i]) {
            black++;
            for (char& c : code_chars) {
                if (c == guess[i]) {
                    code_chars.erase(remove(code_chars.begin(), code_chars.end(), c), code_chars.end());
                    break;
                }
            }
            i++;
        } else {
            i++;
        }
    }

    return black + white;
}