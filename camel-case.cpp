```cpp
#include <string>
#include <cctype>

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> str;
    std::cout << camelCase(str) << std::endl;

    return 0;
}

std::string camelCase(std::string str) {
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
            result += (capitalizeNext ? toupper : tolower)(c);
            capitalizeNext = true;
        }
    }

    return result;
}