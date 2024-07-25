#include <string>
#include <cassert>

using namespace std;

string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char base = islower(c) ? 'a' : 'A';
            char encrypted_char = ((c - base + 2) * 2) % 26 + base;
            encrypted += encrypted_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

int main(){
    assert (encrypt("a")=="e");
    return 0;
}