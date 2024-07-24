Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            while (i < s.size() && s[i] == '-') i++;
            if (i < s.size()) {
                result += toupper(s[i]);
                i++; // skip the first letter of the next word
            }
        } else if (!result.empty() && isalpha(s[i])) {
            result += tolower(s[i]);
        } else {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += s[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The camelCase equivalent is: " << camelCase(input) << std::endl;
    return 0;
}