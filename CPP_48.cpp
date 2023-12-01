#include <string>
#include <cassert>

bool is_palindrome(std::string text){
    int n = text.length();
    for(int i=0; i<n/2; i++){
        if(text[i] != text[n-i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    // Test cases
    assert(is_palindrome("racecar") == true);
    assert(is_palindrome("hello") == false);
    assert(is_palindrome("level") == true);

    return 0;
}