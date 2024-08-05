#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string encrypt(string s);

int main() {
    assert(encrypt("a") == "e");
    return 0;
}

string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        if (isalpha(c)){
            char base = islower(c) ? 'a' : 'A';
            encrypted += ((c - base + 2 * 2) % 26) + base;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}