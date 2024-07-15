#include <iostream>
using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap, guessMap;
    for(int i=0; i<4; i++) {
        codeMap[code[i]]++;
        guessMap[guess[i]]++;
    }
    for(map<pair<char,int>,int>::iterator it=codeMap.begin(); it!=codeMap.end(); ++it) {
        if(it->second > 0 && guessMap.find(it->first) != guessMap.end() && guessMap[it->first] == it->second) {
            count++;
            codeMap.erase(it);
            guessMap.erase(guessMap.find(it->first));
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