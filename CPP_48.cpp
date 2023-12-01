#include <string>

bool is_palindrome(std::string text){
    int length = text.length();
    for(int i=0; i<length/2; i++){
        if(text[i] != text[length-i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    // Test cases
    bool result1 = is_palindrome("racecar");
    bool result2 = is_palindrome("hello");
    
    return 0;
}