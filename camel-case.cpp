#include <iostream>
#include <string>

std::string toCamelCase(std::string s) {
    std::string result;
    size_t i = 0;

    while (i < s.size()) {
        if (s[i] == '-') {
            i++;
            while (i < s.size() && s[i] == '-') i++;
            if (i >= s.size()) break;
            result += toupper(s[i]);
            i++;
        } else if (s[i] == ' ') {
            i++;
            while (i < s.size() && s[i] == ' ') i++;
            if (i >= s.size()) break;
            if (!result.empty()) result += towupper(s[i]);
            else result += tolower(s[i]);
            i++;
        } else {
            if (!result.empty()) {
                if (result.back() != toupper(s[i])) result += toupper(s[i]);
                else result += tolower(s[i]);
            } else {
                result += tolower(s[i]);
            }
            i++;
        }
    }

    return result;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << toCamelCase(s) << '\n';
    return 0;
}