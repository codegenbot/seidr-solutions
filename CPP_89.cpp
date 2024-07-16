#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            result += 'a' + (((c - 'a') + 2 * 2) % 26);
        } else if (c >= 'A' && c <= 'Z') {
            result += 'A' + (((c - 'A') + 2 * 2) % 26);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(encrypt("a") == "e");
    // Add more test cases here
    return 0;
}