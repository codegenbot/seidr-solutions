#include <cstddef>

size_t countSubstringOccurrences(const std::string &str, const std::string &substring) {
    size_t count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != std::string::npos) {
        count++;
        pos += 1;
    }
    return count;
}