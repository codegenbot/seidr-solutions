#include <iostream>
#include <string>

std::string flip_case(std::string str){
    for(size_t i = 0; i < str.length(); i++){
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
        else if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main(int argc, char *argv[]){
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    std::cout << "String after flipping case: " << flip_case(input) << std::endl;
    return 0;
}