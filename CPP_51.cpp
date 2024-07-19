```cpp
#include <iostream>
#include <string>

std::string remove_vowels(std::string input) {
    std::string result = "";
    for(char c : input){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'&& 
           tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && 
           tolower(c) != 'o' && tolower(c) != 'u'){
            result += c;
        }
    }
    return result;
}

int main(){
    std::cout << "Enter a string: ";
    std::string input;  // Create a variable to store the user's input
    std::cin >> input;  // Read the input from the user
    
    std::cout << "String after removing vowels: " << remove_vowels(input) << std::endl;
    return 0;
}