```
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> result;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i].find(prefix) == 0) {
            result.push_back(vec[i]);
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    if(a.size() != b.size()) return false;
    for(size_t i = 0; i < a.size(); ++i) {
        if(std::find(b.begin(), b.end(), a[i]) == b.end()) 
            return false;
    }
    return true;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"), filter_by_prefix({"xxx", "xxxAAA", "xxx"}, "xxx")));
    return 0;
}