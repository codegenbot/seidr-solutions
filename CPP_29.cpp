```cpp
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
        if(s[0].find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    assert(!issame({{{"xxx"}}, {{"xxx"}}}, {{{"xxx"}}}));
    std::vector<std::vector<std::string>> strings = {{"xxx"}, {"asd", "xxy", "john doe", "xxxA", "xxx"}};
    std::vector<std::vector<std::string>> filteredStrings = filter_by_prefix({{strings}}, "xxx");
    assert(std::equal(filteredStrings.begin(), filteredStrings.end(), {{},{"xxx","xxxAAA","xxx"}}));
}