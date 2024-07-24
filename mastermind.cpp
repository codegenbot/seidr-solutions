#include <iostream>
#include <string>

int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    for (char c : code) {
        bool found = false;
        for (int i = 0; i < 4; i++) {
            if (guess[i] == c && !found) {
                whitePegs++;
                found = true;
            }
        }
    }

    return blackPegs << 2 | whitePegs;
}

int main() {
    string code, guess;
    std::cin >> code >> guess;
    int result = mastermind(code, guess);
    cout << (result & 0x3) << endl;
    cout << (result >> 2) << endl;

    return 0;
}