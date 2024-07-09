```cpp
#include <string>
#include <map>

std::pair<int, int> mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    int codeArray[4];
    int guessArray[4];
    for (int i = 0; i < 4; ++i) {
        codeArray[i] = code[i];
        guessArray[i] = guess[i];
    }

    map<char, int> codeCount;
    map<char, int> guessCount;
    for (int i = 0; i < 4; ++i) {
        codeCount[codeArray[i]]++;
        guessCount[guessArray[i]]++;
    }
    for (auto& pair : codeCount) {
        if (pair.second > 0 && pair.second != guessCount[pair.first]) {
            white += pair.second - guessCount[pair.first];
        }
    }

    int codeIndex = 0;
    for (int i = 0; i < 4; ++i) {
        if (codeArray[i] == guessArray[i]) {
            black++;
            codeIndex = i + 1;
        }
    }

    return make_pair(white, black);
}