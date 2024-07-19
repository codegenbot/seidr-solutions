```cpp
#include <iostream>
#include <cctype>
#include <string>
#include <cassert>

std::string flip_case(std::string str) {
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
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
    std::string input = "These violent delights have violent ends";
    output = flip_case(input);
    std::cout << "Computed output: " << output << std::endl;
    std::string expectedOutput = "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS";
    assert(output == expectedOutput);
    return 0;
}