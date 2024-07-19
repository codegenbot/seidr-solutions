#include <bits/stdc++.h>

bool issame(std::vector<std::string> vec1, std::vector<std::string> vec2) {
    if(vec1.size() != vec2.size()) return false;
    for(int i = 0; i < vec1.size(); i++) {
        if(vec1[i] != vec2[i]) return false;
    }
    return true;
}

void push_back(std::vector<std::string>& vec, const std::string& str) {
    vec.push_back(str);
}

std::vector<std::vector<std::string>> filter_by_prefix(std::vector<std::vector<std::string>> strings, std::string prefix) {
    std::vector<std::vector<std::string>> result = {};
    for (const auto& s : strings) {
        if (s[0].find(prefix) == 0) {
            std::vector<std::string> vec = {prefix};
            for (int i = prefix.size(); i < s[0].size(); i++) {
                push_back(vec, std::string(1, s[0][i]));
            }
            result.push_back(vec);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    assert(issame(filter_by_prefix({strings}, "xxx"), {{"xxx"}, {"xxxAAA"}, {"xxx"}}));
    return 0;
}