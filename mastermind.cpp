```cpp
#include <string>
#include <map>
#include <utility>

using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    map<char, int> codeCount;
    map<char, int> guessCount;
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
            codeIndex = i + 1;
        }
    }

    return make_pair(white, black);
}