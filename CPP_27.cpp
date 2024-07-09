#include <iostream>
#include <string>

std::string flip_case(std::string str){
    std::string result = "";
    for(char c : str){
        if(c >= 'a' && c <= 'z')
            result += toupper(c);
        else if(c >= 'A' && c <= 'Z')
            result += tolower(c);
        else
            result += c;
    }
    return result;

int main() {
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    return 0;
}