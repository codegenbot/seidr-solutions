#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

    int whitePegs = 0, blackPegs = 0;
    map<char, int> codeFreq = {{'A', 0}, {'B', 0}, {'C', 0}, {'D', 0}, {'E', 0}, {'F', 0}};
    map<char, int> guessFreq = {{'A', 0}, {'B', 0}, {'C', 0}, {'D', 0}, {'E', 0}, {'F', 0}};

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            if (code[i] >= 'A' && code[i] <= 'F' && guess[i] >= 'A' && guess[i] <= 'F') {
                codeFreq[code[i]]++;
                guessFreq[guess[i]]++;
            }
        }
    }

    for (auto it = codeFreq.begin(); it != codeFreq.end(); ++it) {
        whitePegs += std::min(it->second, guessFreq[it->first]);
    }

    cout << whitePegs << endl << blackPegs << endl;

    return 0;
}