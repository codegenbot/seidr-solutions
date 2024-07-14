```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            result.push_back(' ');
            capitalize = true; 
        } else if (capitalize) { 
            result.push_back(toupper(c));
            capitalize = false; 
        } else {
            result.push_back(tolower(c)); 
        }
    }

    return capitalize ? toupper(result[0]) + result.substr(1) : result;
}

int main() {
    std::string user_input;

    while(true) {
        std::cout << "Enter your string (in kebab-case): ";
        std::getline(std::cin, user_input);
        
        if (!user_input.empty()) { 
            std::string output = camelCase(user_input); // Pass the input to the function
            if(!output.empty())  
                std::cout << "Camel Case: " << output << std::endl; 
        }
    }
    return 0;
}