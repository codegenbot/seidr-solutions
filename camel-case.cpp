#include <cstddef>
#include <string>
#include <cctype>

int main() {
    std::string s;
    std::cin >> s;

    std::string result;
    bool capitalizeNext = true;

    size_t pos = 0;
    for (char c : s) {
        if (c == '-') {
            capitalizeNext = true;
            continue;
        }
        if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    return 0;
}