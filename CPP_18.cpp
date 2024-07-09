#include <string>

int how_many_times(std::string s1, std::string s2) {
    int count = 0;
    size_t pos = 0;
    while ((pos = s1.find(s2, pos)) != std::string::npos) {
        ++count;
        pos += s2.size();
    }
    return count;
}