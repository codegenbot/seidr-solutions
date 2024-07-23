#include <iostream>
#include <vector>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = 0, black = 0;
    vector<int> codeFreq(6, 0), guessFreq(6, 0);
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        } else {
            if (code[i] >= 'A' && code[i] <= 'F') {
                ++codeFreq[code[i] - 'A'];
            }
            if (guess[i] >= 'A' && guess[i] <= 'F') {
                ++guessFreq[guess[i] - 'A'];
            }
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && code[i] >= 'A' && code[i] <= 'F') {
            if (guessFreq[code[i] - 'A'] > 0) {
                ++white;
                --guessFreq[code[i] - 'A'];
            }
        }
    }
    
    cout << white << '\n' << black << '\n';
    
    return 0;
}