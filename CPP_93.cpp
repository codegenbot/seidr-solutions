#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c >= base && c <= base + 1) ? base + 2 : base;
            if (c == 'n' || c == 'o' || c == 'u') {
                c = (isupper(c)) ? 'p' : 'P';
            } else if (c == 'i') {
                c = (isupper(c)) ? 'k' : 'K';
            }
        }
        result += c;
    }
    return result;
}