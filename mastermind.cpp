# include <iostream>
# include <map>
# include <algorithm>

using namespace std;

int main() {
    string code, guess;
    cin >> code >> guess;

    int whitePegs, blackPegs;

    while (!code.empty() && !guess.empty()) {
        whitePegs = 0;
        blackPegs = 0;
        
        map<char, int> codeFreq, guessFreq;
        codeFreq.clear();
        guessFreq.clear();
        
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

        cout << whitePegs << endl << blackPegs << endl;

        // Read new code and guess
        cin >> code >> guess;
    }

    return 0;
}