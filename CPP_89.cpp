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
    assert(encrypt("z") == "d");
    assert(encrypt("xyz") == "bcd");
    assert(encrypt("hello") == "lipps");
    cout << "All tests passed!" << endl;
    return 0;
}