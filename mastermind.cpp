#include <iostream>
#include <string>
#include <cctype>

using namespace std;

pair<int, int> mastermindClues(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    int codeCount[26] = {0};
    int guessCount[26] = {0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[toupper(code[i]) - 'A']++;
            guessCount[toupper(guess[i]) - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        whitePegs += min(codeCount[i], guessCount[i]);
    }

    return make_pair(whitePegs, blackPegs);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    pair<int, int> clues = mastermindClues(code, guess);
    cout << clues.first << "\n" << clues.second << endl;
    return 0;
}