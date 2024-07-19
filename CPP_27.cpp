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
    std::cout << flip_case(input) << std::endl;
    output = flip_case(input);
    output.clear();  
    assert(output == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}