#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;
    
    map<char, int> codeFreq, guessFreq;
    
    codeFreq.clear();
    guessFreq.clear();

    int whitePegs = 0, blackPegs = 0;

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