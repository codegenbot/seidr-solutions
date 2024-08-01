#include <algorithm>
#include <string>
#include <cassert>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::string tmp_s0 = s0;
    std::string tmp_s1 = s1;
    
    sort(tmp_s0.begin(), tmp_s0.end());
    sort(tmp_s1.begin(), tmp_s1.end());
    
    return tmp_s0 == tmp_s1;
}