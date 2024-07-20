#include <vector>
#include <iostream>
using namespace std;

int countBlackPegs(string code, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
            guess[i] = ' '; // mark the correct place as visited
            code[i] = ' '; // mark the correct place as visited
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
            codeCounts[guess[i]]--;
        }
    }
    int totalCorrectColors = 0;
    for (int i = 0; i < 6; ++i) {
        totalCorrectColors += codeCounts[i];
    }
    int blackPegs = countBlackPegs(code, guess);
    return totalCorrectColors - blackPegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << countWhitePegs(code, guess) << endl;
    cout << countBlackPegs(code, guess) << endl;
    return 0;
}