```cpp
#include <string>
#include <cctype>

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, str);
    std::cout << camelCase(str) << std::endl;

    return 0;
}

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-' || str[i] == ' ') {
            if (capitalizeNext) {
                result += toupper(str[i]);
                capitalizeNext = false;
            } else {
                result += str[i];
            }
        } else {
            result += (capitalizeNext ? std::toupper(str[i]) : std::tolower(str[i]));
            capitalizeNext = true;
        }
    }

    return result;
}