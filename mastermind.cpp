#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    vector<char> code_chars(code.begin(), code.end());
    vector<char> guess_chars(guess.begin(), guess.end());

    for (int i = 0; i < 4; i++) {
        if (code_chars[i] == guess_chars[i]) {
            black++;
            code_chars[i] = '\0';
            guess_chars[i] = '\0';
        }
    }

    for (int i = 0; i < 4; i++) {
        int j = 0;
        while (j < 4) {
            if (code_chars[j] == guess_chars[i]) {
                white++;
                code_chars[j] = '\0';
                break;
            }
            j++;
        }
    }

    return {black, white};
}

int main() {
    string code, guess;
    cin >> code >> guess;
    pair<int, int> result = mastermind(code, guess);
    cout << result.second << endl;
    cout << result.first << endl;
    return 0;
}