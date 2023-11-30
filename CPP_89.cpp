#include <string>

string encrypt(string s) {
    string encrypted = "";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            c = 'a' + ((c - 'a' + 2 * 2) % 26);
        } else if (c >= 'A' && c <= 'Z') {
            c = 'A' + ((c - 'A' + 2 * 2) % 26);
        }
        encrypted += c;
    }
    return encrypted;
}