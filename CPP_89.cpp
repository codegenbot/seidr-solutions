#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string encrypt(string s){
    string result = "";
    for(char c : s) {
        result += (c - 'a' + 4) % 26 + 'a';
    }
    return result;
}

int main() {
    assert(encrypt("a") == "e");
    assert(encrypt("xyz") == "bcd");
    cout << "All test cases passed!" << endl;
    return 0;
}