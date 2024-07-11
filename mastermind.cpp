#include <string>
using namespace std;

vector<int> mastermindCodeMaster(string code, string guess) {
    vector<int> result(2);
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++black;
        }
    }

    for (char c : code) {
        int count = 0;
        for (char d : guess) {
            if (c == d && code.find(d) != string::npos) {
                ++count;
            }
        }
        white += min(count, 1);
    }

    result[0] = 4 - black; // White pegs
    result[1] = black; // Black pegs

    return result;
}