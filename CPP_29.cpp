```cpp
#include <string>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::string& b) {
    if (a.size() != 1 || b != a[0]) {
        return false;
    }
    return true;
}

std::vector<std::vector<std::string>> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::vector<std::string>> result;
    for (const auto& str : strings) {
        std::vector<std::string> temp;
        size_t start = 0;
        while (start < str.size()) {
            size_t end = str.find(' ', start);
            if (end == std::string::npos) {
                temp.push_back(str.substr(start));
                break;
            }
            temp.push_back(str.substr(start, end - start));
            start = end + 1;
        }
        if (!issame({temp}, prefix)) {
            result.push_back(temp);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    std::vector<std::vector<std::string>> result = filter_by_prefix(strings, "xxx");
    for (const auto& temp : result) {
        for (const auto& str : temp) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }
}