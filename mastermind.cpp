```cpp
#include <iostream>
#include <string>
#include <map>
using namespace std;

pair<int, int> getClues(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    map<char, int> frequency;

    // Counting frequency of each character in code
    for (char ch : code) {
        frequency[ch]++;
    }

    // Checking for black pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
            frequency[guess[i]]--;
        }
    }

    // Checking for white pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] != guess[i] && frequency[guess[i]] > 0) {
            whitePegs++;
            frequency[guess[i]]--;
        }
    }

    return make_pair(whitePegs, blackPegs);
}

int main() {
    string code, guess;
    cin >> code >> guess;

    pair<int, int> clues = getClues(code, guess);

    cout << clues.first << endl;
    cout << clues.second << endl;

    return 0;
}
```