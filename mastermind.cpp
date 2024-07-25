#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count the number of correct colors in wrong positions
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
            break;
        }
    }
    
    // Count the number of correct colors in right positions
    for(int i = 0; i < 4; i++) {
        int j = 0;
        while(j < 4) {
            if(code[i] == guess[j]) {
                white++;
                code.replace(i, 1, "X");
                guess.replace(j, 1, "X");
                j++;
                break;
            }
            j++;
        }
    }
    
    return black + white - black;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}