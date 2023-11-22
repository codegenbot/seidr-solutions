#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int blackPegs(string code, string guess) {
    int count = 0;
    unordered_map<char, int> frequency;
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
        else {
            frequency[code[i]]++;
        }
    }
    
    for (int i = 0; i < 4; i++) {
        if (code[i] != guess[i] && frequency[guess[i]] > 0) {
            count++;
            frequency[guess[i]]--;
        }
    }
    
    return count;
}

int whitePegs(string code, string guess) {
    int count = 0;
    unordered_map<char, int> frequency;
    
    for (int i = 0; i < 4; i++) {
        if (code[i] != guess[i]) {
            frequency[code[i]]++;
        }
    }
    
    for (int i = 0; i < 4; i++) {
        if (code[i] != guess[i] && frequency[guess[i]] > 0) {
            count++;
            frequency[guess[i]]--;
        }
    }
    
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    
    cout << white << endl;
    cout << black << endl;
    
    return 0;
}