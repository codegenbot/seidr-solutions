#include <iostream>
#include <string>
using namespace std;

pair<int, int> countPegs(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    int countCode[6] = {0};
    int countGuess[6] = {0};
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            countCode[code[i] - 'A']++;
            countGuess[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        whitePegs += min(countCode[i], countGuess[i]);
    }
    
    return make_pair(whitePegs, blackPegs);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    
    pair<int, int> pegs = countPegs(code, guess);
    cout << pegs.first << endl;
    cout << pegs.second << endl;
    
    return 0;
}