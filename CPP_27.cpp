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
    std::cout << "Please enter the string you want to flip: ";
    std::string input;
    std::cin >> input;
    if(input.empty()){
        std::cout << "Error: Please provide a valid input." << std::endl;
    } else{
        std::cout << filp_case(input) << std::endl;
    }
    return 0;
}