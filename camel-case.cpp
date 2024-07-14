```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            capitalize = true; 
        } else if (c != ' ') { 
            if(capitalize) { 
                result.push_back(std::toupper(c));
                capitalize = false; 
            } else {
                result.push_back(std::tolower(c)); 
            }
        } else {
            if (!capitalize && !result.empty()) {
                result += ' '; 
                capitalize = true;
            }
        }
    }

    return capitalize ? std::toupper(result[0]) + result.substr(1) : result;
}

int main() {
    while(true) {
        std::cout << "Enter your string (in kebab-case): ";
        std::string line;
        if (!(std::getline(std::cin, line))) {
            std::cout << "Invalid input. Please try again.\n";
            continue;
        }
        if (!line.empty()) { 
            std::string output = camelCase(line); // Pass the input to the function
            if(!output.empty() && !output.back() == ' ')  
                std::cout << "Camel Case: " << output << std::endl; 
        }
    }
    return 0;
}