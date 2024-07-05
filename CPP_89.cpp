#include <iostream>
#include <cassert>
#include <string>

using namespace std;

string encrypt(string s){
    for (char &c : s) {
        c = ((c - 'a' + 4) % 26) + 'a';
    }
    return s;
}

int main() {
    assert(encrypt("a") == "e");
    cout << "All tests passed!" << endl;
    return 0;
}