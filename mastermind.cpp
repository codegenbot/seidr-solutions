```cpp
#include <string>
using namespace std;

struct PegCounts {
    int black;
    int white;
};

PegCounts mastermind(string code, string guess) {
    int black = 0;
    int white = 0;
    
    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        bool correctColor = false;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i]) {
                correctColor = true;
                break;
            }
        }
        if (correctColor) {
            white++;
            code[i] = ' '; 
            guess[i] = ' ';
        }
    }

    // Count the number of correct colors in correct positions
    for (int i = 0; i < 4; ++i) {
        bool correctPosition = false;
        for (int j = 0; j < 4; ++j) {
            if (code[i] == guess[j]) {
                black++;
                code[i] = ' '; 
                guess[j] = ' ';
                correctPosition = true;
                break;
            }
        }
    }

    return {black, white};
}

int main() {
    string code = "XXXX"; // Your code goes here!
    string guess = "XXXX"; // Your guess goes here!
    PegCounts result = mastermind(code, guess);
    cout << "Black pegs: " << result.black << endl;
    cout << "White pegs: " << result.white << endl;
    return 0;
}