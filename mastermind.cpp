#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    vector<char> codeVec(code.begin(), code.end());
    vector<char> guessVec(guess.begin(), guess.end());
    
    for (int i = 0; i < 4; i++) {
        if (codeVec[i] == guessVec[i]) {
            black++;
            codeVec[i] = '\0';
            guessVec[i] = '\0';
        }
    }
    
    for (int i = 0; i < 4; i++) {
        int j = 0;
        while (j < 4) {
            if (codeVec[j] == guessVec[i]) {
                white++;
                codeVec[j] = '\0';
                break;
            }
            j++;
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