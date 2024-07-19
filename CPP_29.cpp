```cpp
#include <string>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::string& prefix) {
    for (const auto& str : a) {
        if (str.find(prefix) != 0) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        size_t start = 0;
        while (start < str.size()) {
            size_t end = str.find(' ', start);
            if (end == std::string::npos) {
                if (!issame(std::vector<std::string>{{str.substr(start)}} , prefix)) {
                    result.push_back(str.substr(start));
                }
                break;
            }
            if (!issame(std::vector<std::string>{{str.substr(start, end - start)}} , prefix)) {
                result.push_back(str.substr(start, end - start));
            }
            start = end + 1;
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    std::vector<std::string> result = filter_by_prefix(strings, "xxx");
    for (const auto& str : result) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
    if (!issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), "xxx")) {
        assert(false);
    }
}