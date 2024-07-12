#include <vector>
#include <string>

bool issame(std::vector<std::vector<std::string>> a, std::vector<std::vector<std::string>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::vector<std::string>> filter_by_prefix(std::vector<std::vector<std::string>> strings, std::string prefix){
    std::vector<std::vector<std::string>> result;
    for (const auto& s : strings) {
        std::vector<std::string> temp;
        for (const auto& str : s) {
            if (str.find(prefix) == 0) {
                temp.push_back(str);
            }
        }
        if (!temp.empty()) {
            result.push_back(temp);
        }
    }
    return result;
}

int main() {
    assert(issame({{{"xxx"}, {"asd", "xxy", "john doe", "xxxA", "xxx"}},
                   {{"xxx"}, {"xxxAAA", "xxx"}}},
                  true));
    
    std::vector<std::vector<std::string>> strings = {{ "xxx" }, { "asd", "xxy", "john doe", "xxxxAAA", "xxx" }};
    assert(std::equal(filter_by_prefix(strings, "xxx")[0].begin(), filter_by_prefix(strings, "xxx")[0].end(), {"xxx", "xxxAAA", "xxx"}));
}