#include <string>
using namespace std;

struct PegCounts {
    int black;
    int white;
};

PegCounts mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> codeCount;
    map<char, int> guessCount;

    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }

    for (int i = 0; i < 6; ++i) {
        if (codeCount.find(i+'A') != codeCount.end() && guessCount[i+'A'] > 0) {
            black++;
            guessCount[i+'A']--;
        }
    }

    white += accumulate(guessCount.begin(), guessCount.end(), 0) - black;

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