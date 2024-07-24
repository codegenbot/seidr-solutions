#include <vector>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    vector<int> count(6, 0);
    for (char c : code) {
        count[c - 'A']++;
    }
    
    for (int i = 0; i < 4; ++i) {
        if (guess[i] != code[i]) {
            int c = guess[i] - 'A';
            if (count[c] > 0) {
                white++;
                count[c]--;
            }
        }
    }

    return black + white;
}