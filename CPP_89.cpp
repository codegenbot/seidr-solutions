#include <iostream>
#include <string>
using namespace std;

string encrypt(string s) {
    for(char &c : s) {
        if(c >= 'a' && c <= 'z') {
            c = ((c - 'a' + 4) % 26) + 'a';
        }
    }
    return s;
}

int main() {
    cout << (encrypt("a") == "e") << endl;
    return 0;
}