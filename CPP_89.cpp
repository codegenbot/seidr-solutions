#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string encrypt(string s){
    for (char &c : s) {
        c = ((c - 'a' + 4) % 26) + 'a';
    }
    return s;
}

int main() {
    assert(encrypt("a") == "e");
    assert(encrypt("xyz") == "bcd");
    cout << "All tests passed!" << endl;
    return 0;
}