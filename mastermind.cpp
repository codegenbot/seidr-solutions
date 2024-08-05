#include <string>
#include <vector>

std::pair<int, int> mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' ';
            guess[i] = ' ';
        }
    }

    // Count the number of correct colors in right positions
    for (int i = 0; i < 4; ++i) {
        bool found = false;
        for (int j = 0; j < 4; ++j) {
            if (code[i] == guess[j]) {
                found = true;
                code[j] = ' ';
                break;
            }
        }
        if (!found)
            white++;
    }

    return std::make_pair(white, black);
}