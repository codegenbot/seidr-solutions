```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result; 
    for (const auto& s : strings) {
        if (s.find(std::string(prefix)) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    std::vector<std::string> a = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    std::vector<std::string> b = {"xxx", "xxxAAA", "xxx"}; 
    b = filter_by_prefix(a, "xxx");
    assert (issame(b , {"xxx", "xxxAAA", "xxx"}));
}