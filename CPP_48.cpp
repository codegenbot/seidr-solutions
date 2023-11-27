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
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    
    if(is_palindrome(input)){
        std::cout << "The string is a palindrome";
    }
    else{
        std::cout << "The string is not a palindrome";
    }
    
    return 0;
}