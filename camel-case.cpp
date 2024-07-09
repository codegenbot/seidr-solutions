```cpp
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-' || c == ' ') { 
            capitalize = true; 
        } else if (capitalize) {
            result += std::toupper(c);
            capitalize = false; 
        } else {
            result += std::tolower(c);
        }
    }

    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> str;
    std::cout << "CamelCase conversion: " << camelCase(str) << std::endl;
    return 0;
}