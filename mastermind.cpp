#include <vector>
#include <iostream>
using namespace std;

int countBlackPegs(string code, string guess) {
    int black = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }
    return black;
}

int countWhitePegs(string code, string guess) {
    int white = 0;
    vector<char> codeArray(code.begin(), code.end());
    vector<char> guessArray(guess.begin(), guess.end());

    for (int i = 0; i < 4; i++) {
        if (find(codeArray.begin(), codeArray.end(), guess[i]) != codeArray.end()) {
            white++;
            codeArray.erase(remove(codeArray.begin(), codeArray.end(), guess[i]), codeArray.end());
        }
    }

    return white;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter the guess: ";
    cin >> guess;

    int black = countBlackPegs(code, guess);
    int white = 4 - black - countWhitePegs(code, guess);

    cout << black << endl;
    cout << white << endl;

    return 0;
}