#include <string>
#include <cctype>

int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if (std::isdigit(c) && (c - '0' >= 2 && c - '0' <= 7)) {
            count++;
        } else if (!std::isxdigit(c)) {
            return 0; // or handle invalid input as needed
        }
    }
    return count;
}