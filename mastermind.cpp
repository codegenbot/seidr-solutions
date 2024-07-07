#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    
    vector<char> codeUsed;
    for (char c : code) {
        codeUsed.push_back(c);
    }
    
    for (char d : guess) {
        int count = 0;
        for (char e : codeUsed) {
            if (e == d) {
                count++;
            }
        }
        if (count > 1) {
            whitePegs += count - 1;
        } else if (count == 1) {
            blackPegs--;
        }
    }
    
    return make_pair(blackPegs, whitePegs);
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code (4 characters): ";
    cin >> code;
    cout << "Enter your guess (4 characters): ";
    cin >> guess;
    int result = mastermind(code, guess);
    cout << "Number of white pegs: " << result.second << endl;
    cout << "Number of black pegs: " << result.first << endl;
    return 0;

}