#include <string>
#include <iostream>
using namespace std;

string encrypt(string s) {
    for (char &c : s) {
        c = (c - 'a' + 4) % 26 + 'a';
    }
    return s;
}

int main() {
    string input;
    cin >> input;
    cout << encrypt(input) << endl;
    return 0;
}