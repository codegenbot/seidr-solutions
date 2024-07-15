#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the "-"
            while (i < s.length() && s[i] == ' ') i++; // skip the spaces
            result += toupper(s[i]); // capitalize the first letter of each word
        } else if (s[i] != ' ') {
            result += tolower(s[i]); // convert all letters to lowercase
        }
    }
    return result;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << camelCase(s) << std::endl;
    return 0;
}