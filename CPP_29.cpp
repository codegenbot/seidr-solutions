#include <vector>
#include <string>

bool issame(vector<std::string> a, vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::vector<std::string>> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::vector<std::string>> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            std::vector<std::string> temp = {prefix};
            for(int i = prefix.size(); i < s.size(); i++) {
                temp.push_back(s.substr(i, 1));
            }
            result.push_back(temp);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx") , {{"xxx"},{"xxxAAA","xxx"}}));
    return 0;
}