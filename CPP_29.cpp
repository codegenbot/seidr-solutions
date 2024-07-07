```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string> names, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& name : names) {
        if (name.find(prefix) == 0) {
            result.push_back(name);
        }
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    auto result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx");
    if (std::equal(result.begin(), result.end(), {"xxx", "xxxAAA", "xxx"}.begin())) {
        std::cout << "Filtering successful." << std::endl;
    } else {
        std::cout << "Filtering failed." << std::endl;
    }
    return 0;
}