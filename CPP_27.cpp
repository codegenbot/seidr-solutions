#include <iostream>
#include <cctype>
#include <string>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            result += std::toupper(str[i]);
        }
        else{
            result += std::tolower(str[i]);
        }
    }
    return result;
}

int main(){
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Flipped Case: " << flip_case(input) << std::endl;
    return 0;
}