#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

    int whitePegs = 0, blackPegs = 0;

    while (!code.empty() && !guess.empty()) {
        map<char, int> codeFreq, guessFreq;
        whitePegs = 0;
        blackPegs = 0;

        for (int i = 0; i < 4; ++i) {
            if (code[i] == guess[i]) {
                blackPegs++;
            } else {
                if (code[i] >= 'A' && code[i] <= 'F') {
                    codeFreq[code[i]]++;
                }
                if (guess[i] >= 'A' && guess[i] <= 'F') {
                    guessFreq[guess[i]]++;
                }
            }
        }

        for (auto it = codeFreq.begin(); it != codeFreq.end(); ++it) {
            whitePegs += std::min(it->second, guessFreq[it->first]);
        }

        cout << whitePegs << " " << blackPegs << endl;
        code.clear();
        guess.clear();
        cin >> code >> guess;
    }

    return 0;
}