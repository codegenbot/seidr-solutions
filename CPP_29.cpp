```cpp
#include <initializer_list>
#include <vector>
#include <string>

bool issame(std::vector<std::string>& v1, std::vector<std::string>& v2) {
    return v1.size() == v2.size() && v1 == v2;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string>& vec, const std::string& prefix) {
    return {str for str in vec if str.find(prefix) == 0};
}

int main() {
    std::vector<std::string> vec = {"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"};
    std::string prefix = "xxx";
    
    assert(issame(filter_by_prefix(vec, prefix), {prefix, prefix + "AAA"}));
}