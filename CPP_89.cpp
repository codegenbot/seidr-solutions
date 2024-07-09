#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

string encrypt(string s);

int main() {
    assert(encrypt("a") == "e");
    return 0;
}

string encrypt(string s) {
    string result = "";
    for(char c : s) {
        if(isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            result += (c - base + 2 * 2) % 26 + base;
        } else {
            result += c;
        }
    }
    return result;
}