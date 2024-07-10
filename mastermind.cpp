```#include <string>
#include <vector>
#include <algorithm>

std::pair<int, int> mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;
    std::vector<char> code_chars(code.begin(), code.end());
    for (int i = 0; i < 4; ++i) {
        char c1 = code[i];
        char c2 = guess[i];
        if (c1 == c2) {
            --code_chars.size();
            black++;
        } else if (std::count(code_chars.begin(), code_chars.end(), c2)) {
            white++;
            auto it = std::find(code_chars.begin(), code_chars.end(), c2);
            code_chars.erase(it);
        }
    }
    return {white, black};
}``