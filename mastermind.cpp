#include <vector>
#include <iostream>
#include <string>

using namespace std;

int solveMastermind(string masterCode, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    for (int i = 0; i < 4; ++i) {
        char c = masterCode[i];
        if (c == guess[i]) {
            blackPegs++;
        } else {
            bool found = false;
            for (int j = 0; j < 4; ++j) {
                if (guess[j] == c && i != j) {
                    whitePegs++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                whitePegs++;
            }
        }
    }
    
    return make_pair(whitePegs, blackPegs).first - blackPegs;
}

int main() {
    string masterCode, guess;
    cin >> masterCode >> guess;
    int result = solveMastermind(masterCode, guess);
    cout << result << endl;
    return 0;
}