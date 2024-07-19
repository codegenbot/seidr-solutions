#include <algorithm>
#include <string>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::string temp_s0 = s0;
    std::string temp_s1 = s1;
    
    sort(temp_s0.begin(), temp_s0.end());
    sort(temp_s1.begin(), temp_s1.end());
    
    return temp_s0 == temp_s1;
}