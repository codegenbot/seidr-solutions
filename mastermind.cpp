#include <vector>
#include <iostream>
using namespace std;

int countBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int countWhitePegs(string code, string guess) {
    int whitePegs = 0;
    vector<char> codeArray(code.begin(), code.end());
    vector<char> guessArray(guess.begin(), guess.end());

    for (char c : guessArray) {
        if (find(codeArray.begin(), codeArray.end(), c) != codeArray.end()) {
            whitePegs++;
            codeArray.erase(remove(codeArray.begin(), codeArray.end(), c), codeArray.end());
        }
    }

    return whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;

    cout << countWhitePegs(code, guess) << endl;
    cout << countBlackPegs(code, guess) << endl;

    return 0;
}