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
    std::string test1 = "radar";
    std::string test2 = "hello";
    std::string test3 = "level";
    
    if(is_palindrome(test1)){
        std::cout << test1 << " is a palindrome.\n";
    } else {
        std::cout << test1 << " is not a palindrome.\n";
    }
    
    if(is_palindrome(test2)){
        std::cout << test2 << " is a palindrome.\n";
    } else {
        std::cout << test2 << " is not a palindrome.\n";
    }
    
    if(is_palindrome(test3)){
        std::cout << test3 << " is a palindrome.\n";
    } else {
        std::cout << test3 << " is not a palindrome.\n";
    }
    
    return 0;
}