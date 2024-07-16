#include <cstddef>
#include <string>
#include <cctype>

int main() {
    std::string s;
    std::cin >> s;

    std::string result = "";
    bool capitalizeNext = true;
    size_t pos;  // Declare pos before using it

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

    // Remove trailing space
    while ((pos = result.find(' ')) != std::string::npos) {
        result.erase(pos, 1);
    }
    return 0;
}