#include <iostream>
#include <string>

using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        }
    }

    int colorCount[6] = {0};
    for(int i = 0; i < 4; i++) {
        if(code[i] != guess[i]) {
            colorCount[(int)(guess[i] - '0')]++;
        }
    }

    whitePegs = 0;
    for(int i = 0; i < 6; i++) {
        if(colorCount[i] > 0) {
            whitePegs++;
        }
    }

    return make_pair(blackPegs, whitePegs);
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code (4 characters): ";
    cin >> code;
    cout << "Enter your guess: ";
    cin >> guess;
    pair<int, int> result = mastermind(code, guess);
    cout << "Black pegs: " << result.first << ", White pegs: " << result.second << "\n";
}