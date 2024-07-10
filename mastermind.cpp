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
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' '; 
            guess[i] = ' ';
        }
    }

    // Count the number of correct colors in correct positions
    int codeIndex[6][4];
    for (int i = 0; i < 4; ++i) {
        bool placedCorrectly = false;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i] && !placedCorrectly) {
                codeIndex[6][j]++;
                black++;
                placedCorrectly = true;
            }
        }
    }

    for (int i = 0; i < 4; ++i) {
        bool placedCorrectly = false;
        for (int j = 0; j < 4; ++j) {
            if (codeIndex[6][j] > 0 && code[j] == guess[i] && !placedCorrectly) {
                black++;
                codeIndex[6][j]--;
                placedCorrectly = true;
            }
        }
    }

    for (int i = 0; i < 4; ++i) {
        bool placedCorrectly = false;
        for (int j = 0; j < 4; ++j++) {
            if (!placedCorrectly && codeIndex[6][j] > 0) {
                white++;
                codeIndex[6][j]--;
                placedCorrectly = true;
            }
        }
    }

    return {black, white};
}

int main() {
    string code = "ABCD";
    string guess = "ADBE";

    PegCounts result = mastermind(code, guess);

    cout << "Black pegs: " << result.black << endl;
    cout << "White pegs: " << result.white << endl;

    return 0;
}