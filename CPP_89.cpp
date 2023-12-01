#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string encrypt(string s){
    string encrypted = "";
    int shift = 2 * 2; // Shift down by two multiplied to two places
    
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            c = ((c - 'a' + shift) % 26) + 'a'; // Rotate alphabet
        }
        else if(c >= 'A' && c <= 'Z'){
            c = ((c - 'A' + shift) % 26) + 'A'; // Rotate alphabet
        }
        encrypted += c;
    }
    
    return encrypted;
}

int main() {
    assert (encrypt("a") == "e");
    assert (encrypt("Hello, World!") == "Lipps, Asvph!");
    assert (encrypt("abcdefghijklmnopqrstuvwxyz") == "efghijklmnopqrstuvwxyzabcd");
    assert (encrypt("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == "EFGHIJKLMNOPQRSTUVWXYZABCD");
    
    return 0;
}