```cpp
#include <iostream>
#include <string>
#include <cctype>
#include <limits>

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
                result.push_back(' ');
                capitalize = true;
            }
        }
    }

    return capitalize ? std::toupper(result[0]) + result.substr(1) : result;
}

int main() {
    std::string user_input;

    while(true) {
        std::cout << "Enter your string (in kebab-case): ";
        std::string line;
        while (!(std::getline(std::cin, line))) {
            std::cout << "Invalid input. Please try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        if (!line.empty()) { 
            std::string output = camelCase(line); // Pass the input to the function
            if(!output.empty())
                std::cout << "Camel Case: " << output << std::endl; 
        }
    }
    return 0;
}