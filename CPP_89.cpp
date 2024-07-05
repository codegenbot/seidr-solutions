#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string encrypt(string s) {
    for(char &c : s) {
        c = 'a' + (c - 'a' + 4) % 26;
    }
    return s;
}

int main() {
    assert(encrypt("a") == "e");
    cout << "Test passed!" << endl;
    return 0;
}