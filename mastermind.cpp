```cpp
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    unordered_map<char, int> codeCount;
    unordered_map<char, int> guessCount;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i]]++;
            guessCount[guess[i]]++;
        }
    }

    for (const auto& entry : codeCount) {
        whitePegs += min(entry.second, guessCount[entry.first]);
    }

    return make_pair(whitePegs, blackPegs);
}

int main() {
    string code, guess;
    cin >> code >> guess;

    pair<int, int> result = mastermind(code, guess);
    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}
```