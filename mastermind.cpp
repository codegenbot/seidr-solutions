#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i = 0; i < 6; i++) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            if(guess[j] == (char)(i + 65) && code.find((char)(i + 65)) != string::npos) {
                count++;
            }
        }
        white += count - black;
    }

    return make_pair(black, white);
}

int main() {
    string code = "ABCD";  
    string guess = "BADC";  

    pair<int, int> result = mastermind(code, guess);
    cout << "Black pegs: " << result.first << ", White pegs: " << result.second << endl;
    return 0;
}