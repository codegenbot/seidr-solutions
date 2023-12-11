```cpp
#include <iostream>
#include <string>
using namespace std;

bool isValidInput(const string& input) {
    if (input.length() != 4) {
        return false;
    }
    for (char ch : input) {
        if (ch < 'A' || ch > 'F') {
            return false;
        }
    }
    return true;
}

pair<int, int> mastermind(const string& code, const string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    int codeCount[6] = {0};
    int guessCount[6] = {0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 6; i++) {
        whitePegs += min(codeCount[i], guessCount[i]);
    }

    return make_pair(whitePegs, blackPegs);
}

int main() {
    string code, guess;
    cin >> code >> guess;

    if (!isValidInput(code) || !isValidInput(guess)) {
        cout << "Invalid input" << endl;
        return 0;
    }

    pair<int, int> result = mastermind(code, guess);
    cout << result.first << endl;
    cout << result.second << endl;
    return 0;
}
```