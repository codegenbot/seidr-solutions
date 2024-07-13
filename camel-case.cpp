#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += char(toupper(c));
            }
            first = false;
        } else if (c == ' ') {
            if (!first) {
                result += char(toupper(c));
            }
            first = false;
        } else {
            if (first) {
                result += c;
            } else {
                result += tolower(c);
            }
            first = false;
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        s = s.replace(0, 1, toupper(s[0]));
        size_t pos = 0;
        while ((pos = s.find("-")) != std::string::npos) {
            s.erase(pos, 1);
            if (pos > 0) {
                s.insert(pos, toupper(s[pos]));
            }
        }
        std::cout << s << std::endl;
    }
    return 0;
}