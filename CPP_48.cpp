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
    
    std::string processedInput = input;
    while (!processedInput.empty() && processedInput.back() == '\n') {
        processedInput.pop_back();
    }
    
    processedInput.pop_back(); // Add this line
    
    bool result = is_palindrome(processedInput);
    
    if(result)
        std::cout << processedInput << " is a palindrome.";
    else
        std::cout << processedInput << " is not a palindrome.";
    
    return 0;
}