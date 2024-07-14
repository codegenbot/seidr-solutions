#include <vector>
#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count correct colors but wrong places
    map<char, int> codeMap;
    for (char c : code) {
        codeMap[c]++;
    }
    for (char c : guess) {
        if (codeMap[c] > 0) {
            white++;
            codeMap[c]--;
        }
    }

    // Count correct colors and correct places
    int correctCount = 0;
    vector<char> codeVector(code.begin(), code.end());
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            correctCount++;
            codeVector[i] = '#';
        }
    }

    // Count remaining black pegs
    int remainingCorrectCount = 0;
    for (char c : code) {
        bool found = false;
        for (int i = 0; i < 4; i++) {
            if (codeVector[i] == c) {
                found = true;
                break;
            }
        }
        if (!found) remainingCorrectCount++;
    }

    black += correctCount - remainingCorrectCount;

    return make_pair(white, black).second;
}