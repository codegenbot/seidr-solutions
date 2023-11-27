#include <string>

bool is_palindrome(std::string text){
    int len = text.length();
    for(int i=0; i<len/2; i++){
        if(text[i] != text[len-i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    // Test cases
    std::string text1 = "level";
    std::string text2 = "hello";
    
    bool result1 = is_palindrome(text1);
    bool result2 = is_palindrome(text2);
    
    return 0;
}