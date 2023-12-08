```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <string> // Added to include the <string> header

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> filteredStrings;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));

    std::cout << "All test cases passed!" << std::endl; // Added std:: before cout

    return 0;
}
```