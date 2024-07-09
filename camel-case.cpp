#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {  
                result += toupper(c);  
            }
            capitalizeNext = true;
        } else if (capitalizeNext) {
            if (result.empty() || c != '-') {  
                result += toupper(c);
            } else {
                result += tolower(c);  
                capitalizeNext = false;
            }
        } else {
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