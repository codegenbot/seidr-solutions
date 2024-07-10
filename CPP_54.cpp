#include <algorithm>
#include <string>

bool same_chars(const std::string& s0, const std::string& s1) {
    if (s0.size() != s1.size()) {
        return false;
    }

    std::string sorted_s0 = s0;
    std::sort(sorted_s0.begin(), sorted_s0.end());

    std::string sorted_s1 = s1;
    std::sort(sorted_s1.begin(), sorted_s1.end());

    return sorted_s0 == sorted_s1;
}