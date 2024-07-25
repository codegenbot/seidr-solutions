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
    assert(is_palindrome("madam") == true);
    assert(is_palindrome("racecar") == true);
    // Add more test cases here
    return 0;
}