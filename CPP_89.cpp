#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string encrypt(string s){
    string encryptedString = "";
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if(isalpha(c)){
            if(islower(c)){
                c = ((c - 'a') + 2 * 2) % 26 + 'a';
            }
            else{
                c = ((c - 'A') + 2 * 2) % 26 + 'A';
            }
        }
        encryptedString += c;
    }
    return encryptedString;
}

int main() {
    assert(encrypt("a")=="e");
    return 0;
}