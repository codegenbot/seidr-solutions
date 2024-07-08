#include <string> // For string functions
#include <cassert> // For assert function

std::string encode_shift(std::string s); // Function declaration

std::string decode_shift(std::string s){
    std::string out;
    int i;
    for (i=0; i<s.length(); i++)
    {
        int w = ((int)s[i] - 5 - (int)'a' + 26) % 26 + (int)'a';   
        out = out + (char)w;
    }
    return out;
}

std::string encode_shift(std::string s) { // Function definition
    std::string encoded;
    int i;
    for (i = 0; i < s.length(); i++)
    {
        int w = ((int)s[i] + 5 - (int)'a' + 26) % 26 + (int)'a';   
        encoded = encoded + (char)w;
    }
    return encoded;
}