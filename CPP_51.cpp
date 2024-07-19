```cpp
#include <iostream>
#include <string>

std::string remove_vowels(){
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
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
    std::cout << "String after removing vowels: " << remove_vowels() << std::endl;
    return 0;
}