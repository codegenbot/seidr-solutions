#include <iostream>
#include <string>

std::string flip_case(const std::string& str){
    std::string result;
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            result += (char)(str[i] + ('a' - 'A'));
        } else {
            result += (char)(str[i] + ('A' - 'a'));
        }
    }
    return result;
}

int main() {
    std::cout << flip_case("Hello, world!") << std::endl;
    return 0;
}