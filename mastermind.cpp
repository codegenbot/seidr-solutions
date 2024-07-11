#include <vector>
#include <iostream>
#include <string>

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int codeCount[6] = {0};
    int guessCount[6] = {0};

    for (int i = 0; i < 4; ++i) {
        codeCount[code[i] - 'A']++;
        guessCount[guess[i] - 'A']++;
    }

    int count = 0;
    for (int i = 0; i < 6; ++i) {
        if (codeCount[i] && guessCount[i]) {
            count += min(codeCount[i], guessCount[i]);
        }
    }
    return 4 - count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}