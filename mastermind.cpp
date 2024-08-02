#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0, black = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            continue;
        }
        
        bool found = false;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i] && j != i) {
                white++;
                found = true;
                break;
            }
        }
        
        if (!found) {
            for (char c : "abcdef") {
                if (code.find(c) != string::npos && code.find(c) != i) {
                    white++;
                    break;
                }
            }
        }
    }
    
    return pair<int, int>(white - black, black);
}