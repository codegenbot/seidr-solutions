```
#include <iostream>
#include <string>

std::string remove_vowels(std::string input) {
    for(char c : input){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'
           && tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' 
           && tolower(c) != 'o' && tolower(c) != 'u'){
            input += tolower(c); // Convert to lowercase and append
        }
    }
    return input; // Return the modified string
}

int main {
    std::cout << "Enter a string: ";
    std::string input;  
    std::getline(std::cin, input);  
    
    std::cout << "String after removing vowels: " << remove_vowels(input) << std::endl;
    return 0;
}