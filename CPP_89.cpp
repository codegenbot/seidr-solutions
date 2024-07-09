#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            char encrypted = c + 4;
            if(islower(c) && encrypted > 'z'){
                encrypted = 'a' + (encrypted - 'z' - 1);
            } else if(isupper(c) && encrypted > 'Z'){
                encrypted = 'A' + (encrypted - 'Z' - 1);
            }
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert (encrypt("a") == "e");
    return 0;
}