```cpp
#include <initializer_list>

#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : vec) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& vec) {
    if(vec.size() == 0)
        return true;
    std::string first = vec[0];
    for(auto str : vec) {
        if(str != first)
            return false;
    }
    return true;
}