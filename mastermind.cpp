#include <vector>
#include <iostream>
using namespace std;

int getBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int getWhitePegs(string code, string guess) {
    int whitePegs = 0;
    for (char c : code) {
        bool found = false;
        for (char g : guess) {
            if (c == g && !found) {
                found = true;
            }
        }
        if (!found) {
            whitePegs++;
        }
    }
    return blackPegs - getBlackPegs(code, guess);
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter the guess: ";
    cin >> guess;
    int white = getWhitePegs(code, guess);
    int black = getBlackPegs(code, guess);
    cout << white << endl;
    cout << black << endl;
    return 0;
}