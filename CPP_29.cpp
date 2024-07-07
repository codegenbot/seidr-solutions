#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    for(string s : a) {
        if(find(b.begin(), b.end(), s) == b.end()) 
            return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& v, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : v) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    return 0;
}