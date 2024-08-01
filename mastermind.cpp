#include <vector>
#include <iostream>
#include <string>

using namespace std;

int countWhitePegs(const string& code, const string& guess) {
    int whitePegs = 0;
    for (char c : code) {
        if (count(guess.begin(), guess.end(), c) > 0) {
            whitePegs++;
            // Remove the character from the guess to avoid counting it again
            guess.erase(std::remove(guess.begin(), guess.end(), c), guess.end());
        }
    }
    return whitePegs;
}

int countBlackPegs(const string& code, const string& guess) {
    int blackPegs = 0;
    for (char c : code) {
        if (c == guess[0]) {
            blackPegs++;
            break; // The first occurrence is the correct one
        }
    }
    return blackPegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << countWhitePegs(code, guess) << endl;
    cout << countBlackPegs(code, guess) << endl;
    return 0;
}