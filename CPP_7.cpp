#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.empty() && b.empty()) {
        return true;
    }
    
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

void filter_by_substring(std::vector<std::string> vec, const std::string& substr) {
    vec.erase(std::remove_if(vec.begin(), vec.end(), [substr](const std::string& s) {
        return s.find(substr) != std::string::npos;
    }), vec.end());
}