```cpp
#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {  // Check if we've already processed a word
                result += toupper(c);  // Capitalize the first letter of the next word
            }
            capitalizeNext = true;
        } else if (capitalizeNext) {
            if (result.empty() || c != '-') {  // Ignore the first character if it's '-'
                result += toupper(c);
            } else {
                result += tolower(c);  // Otherwise, lowercase the first letter
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