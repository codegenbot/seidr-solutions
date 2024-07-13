#include <string>
#include <cctype>
#include <iostream>

std::string camelCase(std::string str) {
    std::string result = "";
    while (!str.empty()) {
        size_t pos = str.find(" ");
        if (pos == std::string::npos) {
            pos = str.length();
        }
        result += toupper(str[0]); 
        for (int i = 1; i < pos; ++i) {
            result += tolower(str[i]);
        }
        str.erase(0, pos + 1);
    }

    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << camelCase(input) << std::endl;
    return 0;
}