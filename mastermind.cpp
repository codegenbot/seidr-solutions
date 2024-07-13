#include <vector>
#include <iostream>
#include <string>

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
    vector<char> codeArray(code.begin(), code.end());
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            codeArray.erase(remove(codeArray.begin(), codeArray.end(), code[i]), codeArray.end());
        }
    }
    for(int i=0; i<4; i++) {
        if(count < 4 && codeArray.size() > 0 && codeArray[0] == guess[i]) {
            count++;
            codeArray.erase(codeArray.begin());
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