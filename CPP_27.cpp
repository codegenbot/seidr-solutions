```cpp
#include <iostream>
#include <string>

std::string filp_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            result += toupper((char)str[i]);
        } else {
            result += tolower((char)str[i]);
        }
    }
    return result;
}

int main() {
    std::cout << "Error: Please enter a string!" << std::endl;
    if (std::cin >> "") {
        std::cout << "Error: Invalid input. Only letters are allowed." << std::endl;
    } else {
        std::string s;
        std::cin >> s;
        std::cout << filp_case(s) << std::endl;
    }
    return 0;
}