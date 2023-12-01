#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    int codeCount[6] = {0};
    int guessCount[6] = {0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i] - '1']++;
            guessCount[guess[i] - '1']++;
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

    if (code.length() != 4 || guess.length() != 4) {
        cout << "Invalid input" << endl;
        return 0;
    }

    for (char c : code) {
        if (c < '1' || c > '6') {
            cout << "Invalid input" << endl;
            return 0;
        }
    }

    for (char c : guess) {
        if (c < '1' || c > '6') {
            cout << "Invalid input" << endl;
            return 0;
        }
    }

    pair<int, int> result = mastermind(code, guess);
    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}