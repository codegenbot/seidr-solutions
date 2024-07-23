#include <iostream>
#include <string>
#include <sstream>

using namespace std;

pair<int, int> mastermind(string code, string guess) {
    pair<int, int> result;
    int black = 0;
    int white = 0;

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    for(int i = 65; i <= 70; i++) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            if(guess[j] == (char)i) {
                count++;
            }
        }
        white += max(count - black, 0);
    }

    result.first = black;
    result.second = white;

    return result;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter your guess: ";
    cin >> guess;
    pair<int, int> result = mastermind(code, guess);
    cout << "Black pegs: " << result.first << ", White pegs: " << result.second << "\n";
    return 0;
}