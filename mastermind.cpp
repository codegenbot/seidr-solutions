#include <vector>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count the number of correct colors in wrong positions (white pegs)
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
            code[i] = 'x';
            guess[i] = 'x';
        }
    }
    
    // Count the number of correct colors in correct positions (black pegs)
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            white--;
            black++;
        } else if (count(guess.begin(), guess.end(), code[i]) > 0) {
            white++;
        }
    }
    
    return make_pair(white, black).second;
}