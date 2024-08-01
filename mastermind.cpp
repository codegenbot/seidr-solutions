#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    for(int i = 0; i < 4; i++) {
        char c1 = code[i];
        char c2 = guess[i];
        
        if(c1 == c2) {
            black++;
        } else if(count(code.begin(), code.end(), c2) > 0) {
            white++;
        }
    }
    
    for(int i = 0; i < 4; i++) {
        for(int j = i + 1; j < 4; j++) {
            char c1 = code[i];
            char c2 = code[j];
            
            if(c1 == guess[i] && c2 == guess[j]) {
                black++;
                code[i] = '-';
                code[j] = '-';
            } else if((c1 == guess[i] || c1 == guess[j]) &&
                       (c2 == guess[i] || c2 == guess[j])) {
                white++;
                code[i] = '-';
                code[j] = '-';
            }
        }
    }
    
    return {white, black};
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess).first << endl;
    cout << mastermind(code, guess).second << endl;
    return 0;
}