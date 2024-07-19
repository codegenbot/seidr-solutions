```
#include <vector>
#include <string>

bool issame(std::vector<std::vector<std::string>> v1, std::vector<std::vector<std::string>> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i].size() != v2[i].size()) return false;
        for(int j = 0; j < v1[i].size(); j++) {
            if(v1[i][j] != v2[i][j]) return false;
        }
    }
    return true;
}

std::vector<std::vector<std::string>> filter_by_prefix(std::vector<std::vector<std::string>> strings, std::string prefix) {
    std::vector<std::vector<std::string>> result;
    for(auto &s : strings) {
        if(s[0].find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int init() {
    std::vector<std::vector<std::string>> strings = {{ "xxx" }, { "asd" }, { "xxy" }, { "john doe" }, { "xxxxAAA" }, { "xxx" }};
    assert(issame(filter_by_prefix(strings, "xxx"), {{"xxx"},{"xxxAAA"},{"xxx"}}));
    return 0;
}