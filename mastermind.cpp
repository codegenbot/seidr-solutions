#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count correct colors but wrong positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' '; // mark as checked
            guess[i] = ' '; // mark as checked
        }
    }
    
    // Count correct colors and positions
    for (int i = 0; i < 4; ++i) {
        int j = 0;
        while (j < 4 && code[j] != ' ') j++;
        if (j == 4) continue;
        
        while (j < 4 && guess[j] != ' ') j++;
        if (j == 4) continue;
        
        if (code[i] == guess[j]) {
            white++;
            black--;
            code[i] = ' '; // mark as checked
            guess[j] = ' '; // mark as checked
        }
    }
    
    return black;
}