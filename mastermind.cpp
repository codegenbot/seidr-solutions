#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count the number of correct colors in wrong positions
    vector<int> codeCount(6, 0);
    for (char c : code) {
        codeCount[c - 'A']++;
    }
    for (int i = 0; i < 4; i++) {
        char c = guess[i];
        if (c == code[i]) {
            black++;
        } else if (codeCount[c - 'A']) {
            white++;
            codeCount[c - 'A']--;
        }
    }
    
    // Count the number of correct colors in correct positions
    for (int i = 0; i < 4; i++) {
        char c1 = guess[i];
        char c2 = code[i];
        if (c1 == c2) {
            black++;
        }
    }
    
    return make_pair(white, black).second;
}