#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result;
    for (char c : str) {
        if (c == '-') {
            ++str; // skip the hyphen
        } else if (!result.empty() && !std::isupper(c)) { // capitalize first letter of each word after the first one
            result.push_back(std::toupper(c));
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << camelCase(str) << "\n";
    return 0;
}