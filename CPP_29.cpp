```cpp
#include <bits/stdc++.h>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::vector<std::string>> filter_by_prefix(std::vector<std::vector<std::string>> strings, std::string prefix) {
    std::vector<std::vector<std::string>> result;
    for (const auto& s : strings) {
        if (s[0].find(prefix) == 0) {
            std::vector<std::string> temp = {prefix};
            for(int i = prefix.size(); i < s[0].size(); i++) {
                temp.push_back(std::string(1, s[0][i]));
            }
            if(temp.size() > 1) result.push_back(temp); 
        }
    }
    return result;
}

int main() {
    assert(issame(filter_by_prefix({{"xxx"}, {"asd"}, {"xxy"}, {"john doe"}, {"xxxxAAA"}, {"xxx"}}, "xxx") , {{"xxx"}, {"xxxAAA"}, {"xxx"}}));
    return 0;
}