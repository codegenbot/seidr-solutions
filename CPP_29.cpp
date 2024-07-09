#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for(auto str : strings){
        if(str.find(prefix) == 0) result.push_back(str);
    }
    return result;
}

int main() {
    assert(std::equal(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"}, "xxx").begin(), filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"}, "xxx").end(), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}