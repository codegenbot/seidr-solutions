#include <vector>
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
        int count = 0;
        for (char d : guess) {
            if (c == d) {
                count++;
            }
        }
        if (count > 1) {
            whitePegs += count - 1;
        } else if (count == 1) {
            for (int i = 0; i < 4; i++) {
                if (code[i] == c && guess[i] != c) {
                    whitePegs++;
                }
            }
        }
    }

    return blackPegs + whitePegs;
}

int main() {
    string code, guess;
    std::cin >> code >> guess;
    std::cout << mastermind(code, guess) << "\n";
    return 0;