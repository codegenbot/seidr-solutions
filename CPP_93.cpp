#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c == base + 0 || c == base + 1) ? base : (base + ((c - base) % 26) + 2);
        }
        result += tolower(c);
    }
    return result;
}