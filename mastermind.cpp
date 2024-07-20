#include <vector>
#include <iostream>

using namespace std;

int countBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
            code[i] = ' '; // mark the correct place as visited
            guess[i] = ' '; // mark the correct place as visited
        }
    }
    return blackPegs;
}

int countWhitePegs(string code, string guess) {
    int whitePegs = 0;
    vector<int> codeCounts(6, 0);
    for (int i = 0; i < 4; ++i) {
        codeCounts[code[i]]++;
    }
    
    for (int i = 0; i < 4; ++i) {
        if (guess[i] != ' ') { // only consider unvisited positions
            if (code.find(guess[i]) != string::npos) {
                whitePegs++;
                codeCounts[guess[i]]--; // mark the position as visited
            }
        }
    }

    int totalCorrectColors = 0;
    for (int i = 0; i < 6; ++i) {
        if (codeCounts[i] > 0) {
            totalCorrectColors += codeCounts[i];
        }
    }

    int blackPegsCounted = countBlackPegs(code, guess);
    return totalCorrectColors - blackPegsCounted;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int whitePegs = countWhitePegs(code, guess);
    cout << whitePegs << endl;
    int blackPegs = countBlackPegs(code, guess);
    cout << blackPegs << endl;
    return 0;
}