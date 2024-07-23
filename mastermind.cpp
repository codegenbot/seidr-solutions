#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    // Count black pegs
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        }
    }

    // Count total correct characters in code and guess
    int colorCount[6] = {0};
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 4; j++) {
            if(code[j] == '0' + i) {
                colorCount[i]++;
            }
        }
    }

    // Calculate white pegs
    int correctColors = 0;
    for(int i = 0; i < 6; i++) {
        int codeCount = count(code.begin(), code.end(), '0' + i);
        int guessCount = count(guess.begin(), guess.end(), '0' + i);
        correctColors += min(codeCount, guessCount);
    }

    whitePegs = correctColors - blackPegs;

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