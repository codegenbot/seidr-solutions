#include <vector>
#include <string>

int mastermind(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    // Count the number of correct colors in correct positions (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        }
    }

    // Count the number of correct colors in incorrect positions (white pegs)
    std::vector<char> codeCounts(6, 0);
    for (int i = 0; i < 4; ++i) {
        ++codeCounts[guess[i]];
    }
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) continue;
        --codeCounts[guess[i]];
        if (codeCounts[guess[i]] > 0) {
            ++whitePegs;
        }
    }

    return blackPegs << 2 | whitePegs;
}