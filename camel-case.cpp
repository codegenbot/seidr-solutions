```cpp
#include <string>
#include <cctype>

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (!isalnum(c)) { 
            capitalizeNext = true; 
            result += toupper(c); 
        } else {
            if(capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
                capitalizeNext = true;
            }
        }
    }

    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, str);
    std::cout << camelCase(str) << std::endl;

    return 0;
}