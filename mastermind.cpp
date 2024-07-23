#include <iostream>
#include <string>

using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

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

    blackPegs += (colorCount[0] > 1 ? 1 : 0) + (colorCount[1] > 1 ? 1 : 0) + 
                 (colorCount[2] > 1 ? 1 : 0) + (colorCount[3] > 1 ? 1 : 0) + 
                 (colorCount[4] > 1 ? 1 : 0) + (colorCount[5] > 1 ? 1 : 0);

    for(int i = 0; i < 6; i++) {
        if(colorCount[i] > 1) {
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