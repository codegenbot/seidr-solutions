#include <string>
#include <unordered_map>

std::pair<int, int> mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    std::unordered_map<char, int> codeCount;
    std::unordered_map<char, int> guessCount;
    for (int i = 0; i < 4; ++i) {
        codeCount[tuple({code[i], i})]++;
        guessCount[tuple({guess[i], i})]++;
    }
    for (auto& pair : codeCount) {
        if (pair.second > 0 && pair.second != guessCount[make_pair(pair.first, 0)]) {
            white += pair.second - guessCount[make_pair(pair.first, 0)];
        }
    }

    int codeIndex = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    return std::make_pair(white, black);
}