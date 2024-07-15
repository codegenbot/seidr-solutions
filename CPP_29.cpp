#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> filtered_vec;
    for(const std::string& str : vec) {
        if(str.compare(0, prefix.size(), prefix) == 0) {
            filtered_vec.push_back(str);
        }
    }
    return filtered_vec;
}

bool issame(std::vector<std::string> a std::vector<std::string> b) {
    return a == b;
}