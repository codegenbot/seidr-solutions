#include <vector>
#include <iostream>
#include <string>

using namespace std;

int countBlackPegs(string masterMindCode, string guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (masterMindCode[i] == guess[i]) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int countWhitePegs(string masterMindCode, string guess) {
    int whitePegs = 0;
    map<char, int> codeFrequency, guessFrequency;
    for (int i = 0; i < 4; ++i) {
        codeFrequency[masterMindCode[i]]++;
        guessFrequency[guess[i]]++;
    }
    
    for (auto it = codeFrequency.begin(); it != codeFrequency.end(); ++it) {
        if (it->second > 0 && guessFrequency.find(it->first) != guessFrequency.end()) {
            whitePegs += min(it->second, guessFrequency[it->first]);
        }
    }
    
    return whitePegs;
}

int main() {
    string masterMindCode, guess;
    cin >> masterMindCode >> guess;
    cout << countWhitePegs(masterMindCode, guess) << endl;
    cout << countBlackPegs(masterMindCode, guess) << endl;
    return 0;
}