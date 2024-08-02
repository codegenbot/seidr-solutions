#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
            c = ((c - base + 2) % 26) + base;
        }
        result += tolower(c);
    }
    return result;
}