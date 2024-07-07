#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool capitalizeNext = false;

    for (char c : s) {
        if (c == '-' || c == ' ') { 
            if (!result.empty()) {
                result.push_back(c);
            }
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
            capitalizeNext = true;
        }
    }

    // Capitalize the first character of the output string
    if (!result.empty()) {
        result[0] = toupper(result[0]);
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}