#include <cstddef>

int countSubstrings(const string& str, const string& substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != std::string::npos) {
        count++;
        pos += 1;
    }
    return count;
}