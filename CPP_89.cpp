#include <iostream>
#include <string>
using namespace std;

string encrypt(string s) {
    for(char &c : s) {
        c = ((c - 'a' + 4) % 26) + 'a';
    }
    return s;
}

int main() {
    string input;
    cout << "Enter a string to encrypt: ";
    cin >> input;
    cout << "Encrypted string: " << encrypt(input) << endl;
    return 0;
}