#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalizeNext = true;

    if (!str.empty() && str[0] == '-') {
        result.push_back(toupper(str[0]));
        str.erase(0, 1); 
    }

    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else if (c != '-') {  
            result += tolower(c);
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