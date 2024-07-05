```cpp
#include <iostream>
using namespace std;

int whitePegs(string code, string guess) {
    unordered_map<char, int> code_freq, guess_freq;
    for (char c : code) {
        code_freq[c]++;
    }
    for (char c : guess) {
        guess_freq[c]++;
    }

    int white = 0;
    for (auto p : code_freq) {
        white += abs(p.second - guess_freq.count(p.first));
    }

    return white;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < code.size(); ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    string code;
    cout << "Enter the Mastermind code: ";
    cin >> code;

    string guess;
    cout << "Enter your guess: ";
    cin >> guess;

    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);

    cout << black << endl;
    cout << white << endl;

    return 0;
}