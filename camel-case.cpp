#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string s) {
    std::stringstream ss(s);
    std::string result = "";
    bool capitalizeNext = true;
    
    for (std::string group; ss >> group;) {
        if (!result.empty()) {
            result += toupper(group[0]);
            for (int i = 1; i < group.length(); ++i) {
                result += tolower(group[i]);
            }
        } else {
            result = toupper(group);
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "camelCase: " << camelCase(input) << std::endl;
    return 0;
}