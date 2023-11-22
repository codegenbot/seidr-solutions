#include <iostream>
#include <string>
using namespace std;

pair<int, int> getClue(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    int codeCount[6] = {0};
    int guessCount[6] = {0};
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        whitePegs += min(codeCount[i], guessCount[i]);
    }
    
    return make_pair(whitePegs, blackPegs);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    
    pair<int, int> clue = getClue(code, guess);
    cout << clue.first << endl;
    cout << clue.second << endl;
    
    return 0;
}