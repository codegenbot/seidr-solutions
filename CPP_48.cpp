#include <iostream>
#include <string>
#include <cassert>

bool is_palindrome(std::string text) {
    int n = text.length();
    for(int i=0; i<n/2; i++){
        if(text[i] != text[n-1-i]){
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    assert(is_palindrome("level") == true);
    assert(is_palindrome("racecar") == true);
    assert(is_palindrome("hello") == false);
    
    return 0;
}