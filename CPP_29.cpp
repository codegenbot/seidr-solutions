```cpp
#include <string>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::string& b) {
    if (a.size() != 1 || a[0] != b) {
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
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] != prefix) {
                result.push_back(temp);
                break;
            }
        } else {
            result.push_back(std::vector<std::string> {str});
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    std::vector<std::vector<std::string>> result = filter_by_prefix(strings, "xxx");
    return 0;
}