#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + 2) % 26 + base;
        }
        result += tolower(isupper(c)) ? toupper(c) : tolower(c);
    }
    return result;
}