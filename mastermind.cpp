#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count black pegs
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code[i] = 'X';
            guess[i] = 'X';
        }
    }

    // Count white pegs
    map<char, int> codeMap;
    map<char, int> guessMap;

    for(int i=0; i<4; i++) {
        codeMap[code[i]]++;
        guessMap[guess[i]]++;
    }

    for(auto p : codeMap) {
        if(p.second > 0 && guessMap.find(p.first) != guessMap.end()) {
            white += min(p.second, guessMap[p.first]);
        }
    }

    return make_pair(white, black).second;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}