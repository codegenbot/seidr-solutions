```cpp
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void addCharacter(string& str, char c) {
    str.push_back(c);
}

int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        bool matched = false;
        for(char c : "0123456789ABCDEF") {
            if(code[i] == c && guess[i] == c) {
                matched = true;
                break;
            }
        }
        if(!matched) count++;
    }
    return 4 - count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    unordered_map<char, int> codeCount, guessCount;
    for(int i=0; i<4; i++) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }
    for(auto& p : codeCount) {
        if(p.second > 0 && guessCount.count(p.first) == 1) count++;
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