```cpp
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::make_pair;
using std::pair;

pair<int, int> mastermind(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    int codeCount[6] = {0, 0, 0, 0, 0, 0};
    int guessCount[6] = {0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i] - 'a']++;
            guessCount[guess[i] - 'a']++;
        }
    }

    for (int i = 0; i < 6; i++) {
        whitePegs += std::min(codeCount[i], guessCount[i]);
    }

    return make_pair(whitePegs, blackPegs);
}

int main() {
    std::string code, guess;
    std::getline(cin, code);
    std::getline(cin, guess);
    pair<int, int> result = mastermind(code, guess);
    cout << result.first << endl;
    cout << result.second << endl;
    return 0;
}
```