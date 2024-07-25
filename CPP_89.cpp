#include <cctype>

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (std::isalpha(c)) {
            char base = std::isupper(c) ? 'A' : 'a';
            c = (((c - base + 2 * 26) % 26) + base);
        }
        result += c;
    }
    return result;
}