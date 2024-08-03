#include <iostream>
#include <string>

bool checkLastCharacter(const std::string& txt){
    if(txt.empty()) return false;
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        if(txt.find_last_of(" ") == txt.size()-1) return true;
    }
    return false;
}

int main(){
    std::string userInput;
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);
    
    if(checkLastCharacter(userInput)){
        std::cout << "Last character is a letter followed by a space." << std::endl;
    } else {
        std::cout << "Last character is not a letter followed by a space." << std::endl;
    }

    return 0;
}