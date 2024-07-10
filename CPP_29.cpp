#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    if(a.size() != b.size())
        return false;
    
    for(size_t i=0; i<a.size(); ++i){
        if(a[i] != b[i])
            return false;
    }
    
    return true;
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
    auto result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");
    assert(issame(result, {"xxx", "xxxAAA", "xxx"}));
}