#include <string>
#include <map>

using namespace std;

int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    map<char, int> code_count;
    for (char c : code) {
        code_count[c]++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++; // Correct color, correct place - black peg
        } else {
            int count = code_count[guess[i]];
            if (count > 0) {
                white++;
                code_count[guess[i]]--; // Decrement the count
            }
        }
    }

    for (auto it = code_count.begin(); it != code_count.end(); ++it) {
        while(it->second > 0) {
            white++;
            it->second--;
        }
    }

    return black + white;
}

int main() {
    string code = "abcd";
    string guess = "abcd";

    int result = mastermind(code, guess);
    cout << "Black pegs: " << result - (code_count.count('a') - 1) << ", White pegs: " << result - black << endl;

    return 0;
}