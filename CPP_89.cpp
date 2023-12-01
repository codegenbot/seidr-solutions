#include <string>

string encrypt(string s) {
    string encrypted = "";
    int shift = 2 * 2;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            c = 'a' + (c - 'a' + shift) % 26;
        } else if (c >= 'A' && c <= 'Z') {
            c = 'A' + (c - 'A' + shift) % 26;
        }
        encrypted += c;
    }

    return encrypted;
}