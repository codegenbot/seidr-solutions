#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            first = false;
        } else if (!first) {
            result[0] = toupper(c);
            result += c;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end()); // remove spaces
        s.erase(std::remove_if(s.begin(), s.end(), ::isalnum), s.begin());  // remove hyphens
        std::cout << camelCase(s) << '\n';
    }
    return 0;
}