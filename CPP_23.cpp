#include <iostream>
#include <string>
#include <cstring>

int str_length(std::string str){
    return str.length();
}

int main(){
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);
    int length = str_length(input);
    std::cout << "Length of the string is: " << length << std::endl;
    // assert (strlen("asdasnakj") == 9);
    return 0;
}