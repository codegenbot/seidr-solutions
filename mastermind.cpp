#include <vector>
#include <iostream>
using namespace std;

int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }
    
    vector<char> code_chars(6);
    vector<int> code_counts(6, 0);
    
    for (int i = 0; i < 4; i++) {
        code_chars[code[i] - 'A']++;
    }
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            code_counts[code[i] - 'A']--;
        } else {
            code_counts[guess[i] - 'A']--;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        white += min(code_chars[i], code_counts[i]);
    }
    
    return to_string(black) + "\n" + to_string(white);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}