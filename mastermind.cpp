#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0, whitePegs = 0;
    map<char, int> codeFreq, guessFreq;
    
    for (int i = 0; i < code.length(); i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i]]++;
            guessFreq[guess[i]]++;
        }
    }
    
    for (auto it = codeFreq.begin(); it != codeFreq.end(); it++) {
        whitePegs += min(it->second, guessFreq[it->first]);
    }
    
    return make_pair(whitePegs, blackPegs);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    
    pair<int, int> result = mastermind(code, guess);
    cout << result.first << endl;
    cout << result.second << endl;
    
    return 0;
}