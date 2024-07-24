#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    
    if (!str.empty() && str[0] == '-') {  
        result.push_back(toupper(str[0]));
        str.erase(0, 1);  // remove '-' from input string
    }
    
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            if (c != ' ') {  // added this condition to handle extra spaces
                result += tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << camelCase(str) << std::endl;

    return 0;
}