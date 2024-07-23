#include <iostream>
#include <string>

using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    
    int colorCountCode[6] = {0}, colorCountGuess[6] = {0};
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i])
            blackPegs++;
        else {
            for(int j = 0; j < 6; j++) {
                if(code[i] == (char)('0' + j))
                    colorCountCode[j]++;
                if(guess[i] == (char)('0' + j))
                    colorCountGuess[j]++;
            }
        }
    }
    for(int i = 0; i < 6; i++) {
        whitePegs += std::min(colorCountCode[i], colorCountGuess[i]);
        colorCountCode[i] = colorCountGuess[i] = 0;
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