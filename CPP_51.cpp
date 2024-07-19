```cpp
#include <iostream>
#include <string>

std::string remove_vowels(std::string input) {
    std::string result;
    for(char c : input){
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'
           && tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' 
           && tolower(c) != 'o' && tolower(c) != 'u'){
            result += tolower(c); // Convert to lowercase and append
        }
    }
    return result; // Return the modified string

}

std::cout << "Enter a string: ";
std::string input;
std::getline(std::cin, input);

std::cout << "String after removing vowels: " << remove_vowels(input) << std::endl;