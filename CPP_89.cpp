#include <string>
#include <cassert>

using namespace std;

string encrypt(string s){
    string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            char encryptedChar = base + (c - base + 2 * 2) % 26;
            encrypted += encryptedChar;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}