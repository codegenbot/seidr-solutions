```
#include <string>
#include <cctype>

int main() { 
    std::cout << camelCase("camel-case example-test-string"); 
    return 0; 
} 

std::string camelCase(const std::string& s) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-' || c == ' ') {
            if (!capitalizeNext) {
                result += c;
                capitalizeNext = !capitalizeNext;
            }
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += std::tolower(c);
        }
    }

    return result;
}