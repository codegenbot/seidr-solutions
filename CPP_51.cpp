#include <iostream>
#include <string>

// Declare and define the remove_vowels function
std::string remove_vowels(std::string text) {
    std::string result = "";
    for(char c : text){
        if(std::tolower(c) != 'a' && std::tolower(c) != 'e' && 
           std::tolower(c) != 'i' && std::tolower(c) != 'o' && 
           std::tolower(c) != 'u'){
            result += c;
        }
    }
    return result;
}

int main() {
    // your code...
}