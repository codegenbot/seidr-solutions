#include <iostream>
#include <string>

using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    
    int colorCount[6] = {0};
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        } else {
            for(int j = 0; j < 6; j++) {
                if(colorCount[j] && (char)('0' + j) == guess[i]) {
                    whitePegs++;
                    colorCount[j]--;
                    break;
                }
            }
            colorCount[(int)(guess[i] - '0')]++;
        }
    }
    
    return std::make_pair(blackPegs, whitePegs);
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