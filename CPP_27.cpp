#include <iostream>
#include <string>

std::string& flip_case(std::string& str) {
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
    std::string str = "Hello World!";
    flip_case(str);
    std::cout << str << std::endl;
    return 0;
}