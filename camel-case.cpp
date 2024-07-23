```cpp
#include <string>
#include <cctype>

std::string camelCase(const std::string& s) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += c;
        }
    }

    return result;
}

int main() {
    std::string s;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, s);

    std::cout << "In camelCase: " << camelCase(s) << std::endl;

    return 0;
}