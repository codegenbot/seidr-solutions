#include <initializer_list>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : vec) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> a = {"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"};
    std::vector<std::string> b = filter_by_prefix(a, "xxx");
    
    if (issame(b, {"xxx", "xxxAAA", "xxx"})) {
        return 0;
    } else {
        return -1; 
    }
}