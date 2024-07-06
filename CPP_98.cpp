#include <string>
#include <cctype>

int count_upper(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (std::isupper(c)) {
            count++;
        }
    }
    return count;
}