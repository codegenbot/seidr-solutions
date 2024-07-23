#include <iostream>
#include <string>

std::string flip_case(std::string str) {
    for(int i=0; i<str.length(); i++){
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main() {
    std::cout << flip_case("Hello World!") << std::endl;
    return 0;
}