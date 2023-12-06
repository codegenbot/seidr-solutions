#include <iostream>
#include <string>
using namespace std;
string encrypt(string s) {
    string encrypted = "";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            c += 2;
            if (c > 'z') {
                c -= 26;
            }
        } else if (c >= 'A' && c <= 'Z') {
            c += 2;
            if (c > 'Z') {
                c -= 26;
            }
        }
        encrypted += c;
    }
    return encrypted;
}