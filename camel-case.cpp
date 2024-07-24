#include <string>
#include <cctype>
#include <memory>

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, str);
    auto camelCase = std::make_unique<std::string>(camelCase(str));
    std::cout << *camelCase << std::endl;

    return 0;
}

std::string camelCase(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (auto c : str) {
        if (c == '-' || c == ' ') {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += c;
            }
        } else {
            result += (capitalizeNext ? std::toupper(c) : std::tolower(c));
            capitalizeNext = true;
        }
    }

    return result;
}