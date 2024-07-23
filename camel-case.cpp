```cpp
#include <string>

std::string kebabToCamel(const std::string& str) {
    if (str.empty()) {
        return str;
    }
    
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                if (capitalizeNext) {
                    result += toupper(result[0]);
                    capitalizeNext = false;
                } else {
                    result += ' ';
                }
            }
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << kebabToCamel(input) << std::endl;
    return 0;
}