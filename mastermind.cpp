#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    vector<int> codeCount(6, 0);
    vector<int> guessCount(6, 0);
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        int count = min(codeCount[i], guessCount[i]);
        white += count;
    }
    
    black -= white;
    
    return make_pair(white, black).second;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}