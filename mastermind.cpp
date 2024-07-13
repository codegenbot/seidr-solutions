#include <string>
#include <map>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count correct colors in wrong places
    map<char, int> codeCount, guessCount;
    for (char c : code) codeCount[c]++;
    for (char c : guess) guessCount[c]++;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) black++;
        else if (codeCount[guess[i]] > 0) white++;
    }

    return max(0, white - black);
}