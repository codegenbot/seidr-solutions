#include <cctype>

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            int shift = (int)(c - base);
            c = (char)((base + ((shift + 4*2)%26)));
            result += c;
        } else {
            result += c;
        }
    }
    return result;
}