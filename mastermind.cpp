#include <string>
#include <map>
#include <utility>

std::pair<int, int> mastermind(std::string code, std::string guess) {
    map<char, int> codeCount;
    map<char, int> guessCount;

    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }

    for (auto& pair : codeCount) {
        if (pair.second > 0 && pair.second != guessCount[pair.first]) {
            white += pair.second - guessCount[pair.first];
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