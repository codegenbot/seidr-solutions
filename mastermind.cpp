#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

pair<int, int> getCodeClues(string code, string guess) {
    unordered_map<char, int> codeFreq;
    unordered_map<char, int> guessFreq;
    int whitePegs = 0;
    int blackPegs = 0;

    for (int i = 0; i < code.length(); i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }

    for (auto it = codeFreq.begin(); it != codeFreq.end(); it++) {
        whitePegs += min(it->second, guessFreq[it->first]);
    }

    return make_pair(whitePegs, blackPegs);
}

int main() {
    string code, guess;
    cin >> code >> guess;

    pair<int, int> clues = getCodeClues(code, guess);

    cout << clues.first << endl;
    cout << clues.second << endl;

    return 0;
}