#include <iostream>
#include <string>
#include <cassert>

std::string encode_shift(std::string s){
    std::string out;
    int i;
    for (i=0; i<s.length(); i++)
    {
        int w = (((int)s[i] + 5 - (int)'a' + 26 ) % 26) + (int)'a';   
        out += (char)w;
    }
    return out;
}

std::string decode_shift(std::string s){
    std::string out;
    int i;
    for (i=0;i<s.length();i++)
    {
        int w = ((int)s[i] - 5 - (int)'a' + 26) % 26 + (int)'a';   
        out += (char)w;
    }
    return out;
}

int main() {
    std::string str = "hello";
    std::string encoded_str = encode_shift(str);
    assert(decode_shift(encoded_str) == str);
    return 0;
}