#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    vector<char> codeVec(code.begin(), code.end());
    vector<char> guessVec(guess.begin(), guess.end());

    for (int i = 0; i < 4; i++) {
        if (codeVec[i] == guessVec[i]) {
            blackPegs++;
            codeVec[i] = '\0';
            guessVec[i] = '\0';
        }
    }

    for (int i = 0; i < 4; i++) {
        if (std::count(codeVec.begin(), codeVec.end(), guessVec[i]) > 0) {
            whitePegs++;
            std::count(codeVec.begin(), codeVec.end(), guessVec[i])--;
        }
    }

    return blackPegs + whitePegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}