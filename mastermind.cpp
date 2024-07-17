#include <vector>
#include <iostream>
#include <string>

using namespace std;

int getWhitePegs(string code, string guess) {
    int whitePegs = 0;
    for (char c : code) {
        for (char g : guess) {
            if (c == g && c != g) {
                whitePegs++;
                break;
            }
        }
    }
    return whitePegs;
}

int getBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (char c : code) {
        if (c == guess[0]) {
            blackPegs++;
            break;
        }
    }
    for (char g : guess) {
        if (g == code[0]) {
            blackPegs++;
            break;
        }
    }
    return max(blackPegs - getWhitePegs(code, guess), 0);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << getWhitePegs(code, guess) << endl;
    cout << getBlackPegs(code, guess) << endl;
    return 0;
}