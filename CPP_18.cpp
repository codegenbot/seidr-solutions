#include <cassert>
#include <string>

int how_many_times(const std::string& str, const std::string& substring) {
    int count = 0;
    size_t pos = 0;
    std::string temp_str = str; // Create a copy of the original string

    while ((pos = temp_str.find(substring)) != std::string::npos) {
        count++;
        temp_str.erase(0, pos + substring.length());
    }
    return count;
}