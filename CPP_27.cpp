#include <iostream>
#include <cctype>
#include <string>

std::string filp_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            result += toupper(c);
        else
            result += tolower(c);
    }
    return result;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    std::cout << "Flip Case of the string is : " << filp_case(s) << std::endl;
    return 0;
}