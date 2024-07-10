#include <string>

int how_many_times(std::string str, std::string substring) {
    assert(!substring.empty());
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != std::string::npos) {
        ++count;
        ++pos;
    }
    return count;
}