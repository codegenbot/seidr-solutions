#include <string>
#include <cassert>

std::string encrypt(std::string s){
    std::string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char base = islower(c) ? 'a' : 'A';
            encrypted += static_cast<char>((c - base + 2 * 2) % 26 + base);
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

int main(){
    assert(encrypt("a")=="e");
    assert(encrypt("Hello, World!")=="Jgnnq, Yqtnf!");
    assert(encrypt("123")=="123");
    assert(encrypt("Programming123")=="Rtcugpokpi123");
    assert(encrypt("UPPERCASE")=="WRRTGTCEG");
    assert(encrypt("lowercase")=="nqpgtceg");
    assert(encrypt("")=="");
    return 0;
}