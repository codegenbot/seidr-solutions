```cpp
#include <bits/stdc++.h>

bool issame(const std::vector<std::vector<std::string>>& strings) {
    if(strings.size() == 0) return true;
    bool same = false;
    for(int i = 0; i < strings[0].size(); i++) {
        string prefix = "";
        for(int j = 0; j <= i; j++) {
            prefix += strings[0][j];
        }
        same = (issame(strings, prefix));
        if(!same) return false;
    }
    return true;
}

void push_back(std::vector<std::string>& vec, const std::string& str) {
    vec.push_back(str);
}

std::vector<std::vector<std::string>> filter_by_prefix(std::vector<std::vector<std::string>> strings, std::string prefix) {
    std::vector<std::vector<std::string>> result;
    for (const auto& s : strings) {
        if (s[0].find(prefix) == 0) {
            push_back(result, {prefix});
            for(int i = prefix.size(); i < s[0].size(); i++) {
                push_back(result.back(), std::string(1, s[0][i]));
            }
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<std::string>> strings = {{{"xxx"}}, {{"asd"}}, {{"xxy"}}, {{"john doe"}}, {{"xxxxAAA"}}, {{"xxx"}}};
    assert(issame(filter_by_prefix({std::vector<std::string>{{"xxx"}}}, "xxx"), {{"xxx"}, {"xxxAAA"}, {"xxx"}}));
    return 0;
}