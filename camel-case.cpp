#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip the hyphen
            if (i < s.size()) {
                result += toupper(s[i]);
            }
        } else if (!result.empty() && !std::isupper(s[i])) { // first letter of each word should be uppercase
            result[0] = toupper(result[0]);
        } else {
            result += tolower(s[i]); // all other letters are lowercase
        }
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}