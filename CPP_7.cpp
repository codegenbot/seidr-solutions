#include <vector>
#include <algorithm>

bool areSame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size()) return false;
    
    for (const auto& str : vec1) {
        if (std::find(vec2.begin(), vec2.end(), str) == vec2.end())
            return false;
    }
    
    return true;
}