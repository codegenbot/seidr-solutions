```cpp
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filterByPrefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    };
}

int main() {
    if (!isSame(filterByPrefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}))
        std::cout << "Test failed. The actual output was different from the expected output.\n";
    else
        std::cout << "Test passed successfully.\n";
    return 0;
}