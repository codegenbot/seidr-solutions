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
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::cout << flip_case(s) << std::endl;
    return 0;
}