#include <vector>
#include <iostream>
using namespace std;

int getWhitePegs(string code, string guess) {
    int whitePegs = 0;
    map<char, int> codeCount, guessCount;
    
    // Count the occurrences of each character in the code and guess
    for (char c : code) {
        codeCount[c]++;
    }
    for (char c : guess) {
        guessCount[c]++;
    }
    
    // Calculate white pegs by subtracting the number of correct characters in the guess from the total count
    for (auto& pair : codeCount) {
        if (guessCount.find(pair.first) != guessCount.end()) {
            whitePegs += min(pair.second, guessCount[pair.first]);
        }
    }
    
    return whitePegs;
}

int getBlackPegs(string code, string guess) {
    int blackPegs = 0;
    map<char, int> codeCount, guessCount;
    
    // Count the occurrences of each character in the code and guess
    for (char c : code) {
        codeCount[c]++;
    }
    for (char c : guess) {
        guessCount[c]++;
    }
    
    // Calculate black pegs by counting the correct characters at the correct positions
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
    }
    
    return blackPegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << getWhitePegs(code, guess) << endl;
    cout << getBlackPegs(code, guess) << endl;
    return 0;
}