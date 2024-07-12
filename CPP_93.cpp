#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + 3) % 26 + base;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                c = (base + ((c - base) + 2)) % 26 + base;
            }
        }
        result += c;
    }
    return result;
}