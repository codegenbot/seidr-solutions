```c++
#include <bits/stdc++.h>

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    
    map<char, int> codeCount;
    map<char, int> guessCount;
    
    for (char c : code) {
        codeCount[c]++;
    }
    
    for (char c : guess) {
        guessCount[c]++;
    }
    
    for (auto p : codeCount) {
        if (p.second > 0 && guessCount.find(p.first) != guessCount.end() && p.second == guessCount[p.first]) {
            blackPegs += p.second;
        } else if (p.second > 0 && guessCount.find(p.first) != guessCount.end()) {
            whitePegs += min(p.second, guessCount[p.first]);
        }
    }
    
    return blackPegs;
}

int main() {
    string code, guess;
    cout << "Enter Mastermind code: ";
    cin >> code;
    cout << "Enter your guess: ";
    cin >> guess;
    int result = mastermind(code, guess);
    cout << "Black pegs: " << result << endl;
    return 0;
}