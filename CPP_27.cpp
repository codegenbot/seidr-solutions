```cpp
#include <iostream>
#include <cctype>
#include <string>

std::string flip_case(const std::string& str) {
    std::string result;
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(std::isprint(c))
            if(c >= 'a' && c <= 'z')
                result += std::toupper(c);
            else if(c >= 'A' && c <= 'Z')
                result += std::tolower(c);
            else
                result += c;
    }
    return result;
}

int main_function() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << flip_case(input).c_str() << '\n';
    if(flip_case(input) == "these violent delights have violent ends")
        return 0;
    else
        return 1;
}