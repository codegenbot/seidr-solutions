#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
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
    std::string input;
    char c;
    while((c = getchar()) != '\n') {
        if(c == '-') {
            continue;
        }
        input += c;
    }
    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}