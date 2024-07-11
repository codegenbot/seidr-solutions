```cpp
#include <iostream>
#include <string>

bool is_palindrome(std::string text){
    int start = 0;
    int end = text.length() - 1;

    while(start < end){
        if(text[start] != text[end])
            return false;
        start++;
        end--;
    }

    return true;

}

int main(){
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    if (input.back() == '\n') {
        input.pop_back(); // remove the newline character
    }
    
    bool result = is_palindrome(input);
    
    if(result)
        std::cout << input << " is a palindrome.";
    else
        std::cout << input << " is not a palindrome.";
    
    return 0;
}