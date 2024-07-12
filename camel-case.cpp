#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    // add a space before the first word and capitalize it
    if (!result.empty()) {
        result[0] = toupper(result[0]);
    }

    return (result.empty() ? s : " " + result);
}

int main() {
    std::string input;
    std::cin >> input;

    std::cout << camelCase(input) << std::endl;

    return 0;
}