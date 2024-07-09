```cpp
#include <initializer_list>

#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : vec) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (const auto& str : vec1) {
        if (std::find(vec2.begin(), vec2.end(), str) == vec2.end()) return false;
    }
    return true;
}

int main() {
    std::vector<std::string> vec = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    std::string prefix = "xxx";
    std::vector<std::string> result = filter_by_prefix(vec, prefix);
    bool same = issame({result[0], result[1], "xxx"}, {"xxx", "xxxAAA", "xxx"});
    return 0;
}