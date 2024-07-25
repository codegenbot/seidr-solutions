#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
            c = (c >= 'a' && c <= 'z') ? (base + ((c - base) + 2) % 26) : (base + ((c - base) + 2) % 26);
        }
        result += tolower(c);
    }
    return result;
}