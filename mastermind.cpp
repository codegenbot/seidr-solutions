```cpp
#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    // Count correct positions (black pegs)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count correct colors (white pegs)
    bool code_counts[6] = {false};
    for (char c : code) {
        code_counts[c - 'A'] = true;
    }

    int white_count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code_counts[guess[i] - 'A']) {
            white_count++;
            code_counts[guess[i] - 'A'] = false;
        }
    }

    white = white_count;

    return black + white;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter your guess: ";
    cin >> guess;
    int result = mastermind(code, guess);
    cout << "Black pegs: " << (result / 2) << ", White pegs: " << (result % 2) << endl;
    return 0;
}