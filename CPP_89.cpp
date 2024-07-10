#include <stdio.h>
#include <string>
using namespace std;

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char base = 'a';
            int offset = (int(c - base) + 2 * 26) % 26;
            result += base + offset;
        } else if (c >= 'A' && c <= 'Z') {
            char base = 'A';
            int offset = (int(c - base) + 2 * 26) % 26;
            result += base + offset;
        } else {
            result += c;
        }
    }
    return result;
}