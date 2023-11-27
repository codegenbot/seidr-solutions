#include <string>
#include <cassert>

std::string encrypt(std::string s){
    std::string encrypted = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            c = (c - 'a' + 2 * 2) % 26 + 'a';
        }
        else if(c >= 'A' && c <= 'Z'){
            c = (c - 'A' + 2 * 2) % 26 + 'A';
        }
        encrypted += c;
    }
    return encrypted;
}

int main() {
    assert (encrypt("a")=="e");
    assert (encrypt("Hello")=="Jgnnq");
    assert (encrypt("World")=="Yqtnf");
    assert (encrypt("abcXYZ")=="cdeZAB");
    return 0;
}