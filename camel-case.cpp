#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    int prevSpacePos = 0;
    
    for(int i=0; i<=str.size(); i++) {
        if(i == str.size() || str[i] == '-') {
            std::string word = str.substr(prevSpacePos, i-prevSpacePos);
            result += (word.size()>1)?std::toupper(word[0])+std::string(word.begin()+1, word.end()) : " "+std::uppercase(word);
            prevSpacePos = i+1;
        }
    }
    
    return result;
}

int main() {
    std::string input;
    while(true) {
        std::cout << "Enter a string (or 'q' to quit): ";
        std::cin >> input;
        
        if(input == "q")
            break;
        
        std::cout << kebabToCamel(input) << std::endl;
    }
    
    return 0;
}