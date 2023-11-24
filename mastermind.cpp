#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    int count[6] = {0};
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            count[code[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 4; i++) {
        if (code[i] != guess[i] && count[guess[i] - 'A'] > 0) {
            whitePegs++;
            count[guess[i] - 'A']--;
        }
    }
    
    return make_pair(whitePegs, blackPegs);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    
    pair<int, int> result = mastermind(code, guess);
    cout << result.first << endl;
    cout << result.second << endl;
    
    return 0;
}