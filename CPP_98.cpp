#include <string>
#include <cctype>

int count_upper(const std::string& s) {
    int count = 0;
    for (size_t i = 0; i < s.length(); i += 2) {
        if (std::isupper(s[i])) {
            count++;
        }
    }
    return count;
}