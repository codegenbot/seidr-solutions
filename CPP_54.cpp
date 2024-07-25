#include <algorithm>
#include <string>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::string temp0 = s0, temp1 = s1;
    std::sort(temp0.begin(), temp0.end());
    std::sort(temp1.begin(), temp1.end());
    
    return temp0 == temp1;
}