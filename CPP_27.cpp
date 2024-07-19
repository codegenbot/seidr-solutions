```cpp
#include <iostream>
#include <cctype>
#include <string>

std::string flip_case(std::string str) {
    std::string result;
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(std::isprint(c))
            if(c >= 'a' && c <= 'z')
                result += toupper(c);
            else if(c >= 'A' && c <= 'Z')
                result += tolower(c);
            else
                result += c;
    }
    return result;
}

int main() {
    std::string input = std::move("These violent delights have violent ends");
    std::string output = flip_case(input);
    std::cout << "Computed output: " << output << std::endl;
    assert(flip_case(input) == "these violent delights have violent ends");
    return 0;
}