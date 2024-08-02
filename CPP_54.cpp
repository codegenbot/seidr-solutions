#include <algorithm>
#include <string>
#include <cctype>

bool same_chars(const std::string& s0, const std::string& s1) {
    std::string sorted_s0 = s0;
    std::string sorted_s1 = s1;
    
    sorted_s0.erase(std::remove_if(sorted_s0.begin(), sorted_s0.end(), ::isspace), sorted_s0.end());
    sorted_s1.erase(std::remove_if(sorted_s1.begin(), sorted_s1.end(), ::isspace), sorted_s1.end());
    
    std::transform(sorted_s0.begin(), sorted_s0.end(), sorted_s0.begin(), ::tolower);
    std::transform(sorted_s1.begin(), sorted_s1.end(), sorted_s1.begin(), ::tolower);
    
    std::sort(sorted_s0.begin(), sorted_s0.end());
    std::sort(sorted_s1.begin(), sorted_s1.end());
    
    return sorted_s0 == sorted_s1;
}