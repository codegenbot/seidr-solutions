#include <string>
using namespace std;

std::string encrypt(std::string s){
    std::string encrypted = "";
    for(char c : s) {
        if(isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            encrypted += (char)((((c - base) + 2 * 2) % 26) + base);
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}