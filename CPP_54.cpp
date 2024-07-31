#include <algorithm>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::string temp0 = s0;
    std::string temp1 = s1;
    sort(temp0.begin(), temp0.end());
    sort(temp1.begin(), temp1.end());
    return temp0 == temp1;
}