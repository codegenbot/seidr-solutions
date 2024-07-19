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
                result += (char)toupper((int)c);
            else if(c >= 'A' && c <= 'Z')
                result += (char)tolower((int)c);
            else
                result += c;
    }
    return result;
}

int main() {
    std::string input = "These violent delights have violent ends";
    std::cout << flip_case(input) << std::endl;
    if(flip_case(input) != "these violent delights have violent ends")
        return 1;
    return 0;
}