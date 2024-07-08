#include <iostream>
#include <string>
#include <cctype>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(isalpha(str[i])){
            char c = (isupper(str[i])) ? tolower(str[i]) : toupper(str[i]);
            result += c;
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "these violent delights have violent ends");
    std::cout << flip_case("Hello, world!") << std::endl;
    return 0;
}