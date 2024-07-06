#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c >= base && c <= base + 25) ? c : base;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                result += (char)(base + 2);
            } else {
                result += c;
            }
        } else {
            result += c;
        }
    }
    return result;
}