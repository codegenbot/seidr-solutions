```c++
#include <iostream>
#include <string>

using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return 4 - count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<6; i++) {
        int codeCount = 0;
        int guessCount = 0;
        char ch = (i < 3 ? '0' + i : 'A' - 10);
        for(int j=0; j<4; j++) {
            if(code[j] == ch) {
                codeCount++;
            }
            if(guess[j] == ch) {
                guessCount++;
            }
        }
        if(codeCount > 0 && guessCount > 0) {
            count += min(codeCount, guessCount);
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}