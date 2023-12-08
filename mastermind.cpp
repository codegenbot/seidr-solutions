```cpp
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::make_pair;
using std::pair;
using std::string;

pair<int, int> mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    int codeCount[6] = {0};
    int guessCount[6] = {0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i] - '0']++;
            guessCount[guess[i] - '0']++;
        }
    }

    for (int i = 0; i < 6; i++) {
        whitePegs += std::min(codeCount[i], guessCount[i]);
    }

    return make_pair(whitePegs, blackPegs);
}

int main() {
    string code, guess;
    getline(cin, code);
    getline(cin, guess);
    pair<int, int> result = mastermind(code, guess);
    cout << result.first << endl;
    cout << result.second << endl;
    return 0;
}
```