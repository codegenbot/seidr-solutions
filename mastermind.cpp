#include <iostream>
#include <string>
using namespace std;

int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;

    while (getline(cin, code)) {
        getline(cin, guess);

        // Keep track of the number of unique characters in the guess string
        unordered_map<char, int> countMap;
        for (int i = 0; i < guess.length(); i++) {
            char ch = guess[i];
            if (!countMap.contains(ch)) {
                countMap[ch] = 1;
            } else {
                countMap[ch]++;
            }
        }

        // Count white and black pegs
        for (int i = 0; i < code.length(); i++) {
            if (code[i] == guess[i]) {
                blackPegs++;
            } else if (!countMap[guess[i]]) {
                whitePegs++;
            }
        }

        cout << whitePegs << " " << blackPegs << endl;
    }

    return 0;
}