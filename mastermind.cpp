#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

bool isValidInput(const string& input) {
    return input.length() == 4 && input.find_first_not_of("ABCDEF") == string::npos;
}

int main() {
    string code, guess;

    do {
        cout << "Enter the code (4 characters from A to F): ";
        cin >> code;
    } while (!isValidInput(code));

    do {
        cout << "Enter your guess (4 characters from A to F): ";
        cin >> guess;
    } while (!isValidInput(guess));

    map<char, int> codeFreq, guessFreq;

    int whitePegs = 0, blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }

    for(const auto& pair : codeFreq) {
        whitePegs += min(codeFreq[pair.first], guessFreq[pair.first]);
    }

    cout << whitePegs << endl << blackPegs << endl;

    return 0;
}