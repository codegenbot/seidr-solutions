#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string res = "";
    bool firstWord = true;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '-') {
            if(!firstWord) {
                res += toUpper(s[i + 1]);
                i++;
            }
            else
                firstWord = false;
        } 
        else if(s[i] == ' ')
            firstWord = false;
        
        else
            res += s[i];
    }

    return res;
}

int main() {
    std::string input;
    while(true) {
        std::cout << "Enter a string in kebab-case: ";
        std::cin >> input;
        if(input == "nospaceordash")
            break;
        
        std::cout << "camelCase: " << camelCase(input) << std::endl;
    }
    return 0;
}