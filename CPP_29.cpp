#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& input, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& str : input) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool are_equal(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
    }
    return true;
}

int main() {
    if (are_equal(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"})) {
        std::cout << "Filtering successful." << std::endl;
    } else {
        std::cout << "Filtering failed." << std::endl;
    }
    return 0;
}