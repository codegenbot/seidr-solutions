#include <algorithm>
#include <string>

std::string anti_shuffle(std::string s) {
    std::sort(s.begin(), s.end());
    return s;
}