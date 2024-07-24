#include<string>
using namespace std;

string encrypt(string s) {
    string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            int pos = (c - base + 2*2) % 26;
            encrypted += pos < 26 ? base + pos : base;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}