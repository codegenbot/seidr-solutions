#include <string>
#include <algorithm>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::string str0 = s0;
    std::string str1 = s1;
    
    std::sort(str0.begin(), str0.end());
    std::sort(str1.begin(), str1.end());
    
    return str0 == str1;
}