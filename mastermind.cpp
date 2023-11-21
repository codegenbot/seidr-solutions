#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    int codeCount[26] = {0};
    int guessCount[26] = {0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            if (code[i] >= 'A' && code[i] <= 'F') {
                codeCount[code[i] - 'A']++;
            }
            if (guess[i] >= 'A' && guess[i] <= 'F') {
                guessCount[guess[i] - 'A']++;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        int index = guess[i] - 'A';
        if (code[i] != guess[i] && guessCount[index] > 0) {
            whitePegs++;
            guessCount[index]--; // Fix: decrement guessCount instead of codeCount
        }
    }

    return make_pair(blackPegs, whitePegs);
}

int main() {
    string code, guess;
    cin >> code >> guess;

    pair<int, int> result = mastermind(code, guess);
    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}