#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix){
    std::vector<std::string> filtered;
    for(const auto& str : vec){
        if(str.find(prefix) == 0){
            filtered.push_back(str);
        }
    }
    return filtered;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}