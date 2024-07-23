```cpp
#include <iostream>
#include <cctype>
#include <string>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(std::islower(str[i])){
            result += std::toupper(str[i]);
        } else {
            result += std::tolower(str[i]);
        }
    }
    return result;
}

int main() {
    std::string s;
    char c;
    s.clear(); 
    std::cout << "Enter a string: ";
    while ((c = std::cin.get()) != '\n') {
        s.push_back(c);
    }