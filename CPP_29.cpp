
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

namespace std {
    bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
        return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
    }
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> result;
    for (const std::string& str : vec) {
        if (str.substr(0, prefix.size()) == prefix) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    
    return 0;
}