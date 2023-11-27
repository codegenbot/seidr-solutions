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
    std::string text1 = "racecar";
    std::string text2 = "hello";
    
    if(is_palindrome(text1)){
        std::cout << "Text1 is a palindrome" << std::endl;
    } else {
        std::cout << "Text1 is not a palindrome" << std::endl;
    }
    
    if(is_palindrome(text2)){
        std::cout << "Text2 is a palindrome" << std::endl;
    } else {
        std::cout << "Text2 is not a palindrome" << std::endl;
    }
    
    return 0;
}