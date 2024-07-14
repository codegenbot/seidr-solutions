#include <iostream>
using namespace std;

int mastermind(const char* code, const char* guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }

    for (int i = 0; i < 4; i++) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (guess[j] == code[i] && j != i) {
                whitePegs++;
                found = true;
                break;
            }
        }
        if (!found) {
            whitePegs++;
        }
    }

    return blackPegs + whitePegs;
}

int main() {
    const char* code = "abcD";
    const char* guess = "aBcd";
    int result = mastermind(code, guess);
    cout << "Black pegs: " << (result / 2) << ", White pegs: " << (result % 2) << endl;
    return 0;