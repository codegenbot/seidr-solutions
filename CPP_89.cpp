#include <iostream>
#include <string>

using namespace std;

string encrypt(string s) {
    for (char &c : s) {
        c = (c - 'a' + 4) % 26 + 'a';
    }
    return s;
}

int main() {
    cout << encrypt("a") << endl;  // For testing purpose
    return 0;
}