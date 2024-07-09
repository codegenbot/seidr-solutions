#include <vector>
#include <iostream>
#include <string>

using namespace std;

int solve(const string& code, const string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Create a map to store the frequency of each color in the code
    map<char, int> codeFrequency;
    for (char c : code) {
        codeFrequency[c]++;
    }

    // Iterate over each character in the guess
    for (int i = 0; i < 4; i++) {
        char c = guess[i];

        // If the color matches and it's correct place, increment blackPegs
        if (c == code[i]) {
            blackPegs++;
        } else {
            // If the color doesn't match or it's wrong place, decrement frequency in codeFrequency map
            codeFrequency[c]--;
        }
    }

    // Iterate over each character in the guess again to count white pegs
    for (int i = 0; i < 4; i++) {
        char c = guess[i];

        // If the color matches but it's wrong place, increment whitePegs and set codeFrequency[c] back to its original value
        if (c == code[i]) continue;
        if (codeFrequency[c] > 0) {
            whitePegs++;
            codeFrequency[c]--;
        }
    }

    return make_pair(whitePegs, blackPegs).second;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << solve(code, guess) << endl;
    return 0;
}