#include <string>
bool is_palindrome(std::string text) {
    int len = text.length();
    for(int i=0; i<len/2; i++){
        if(text[i] != text[len-i-1])
            return false;
    }
    // handle odd length strings
    if (len % 2 == 1)
        if (text[len/2] != text[len/2 - 1]) 
            return false;
    return true;
}