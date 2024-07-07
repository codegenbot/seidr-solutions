```cpp
#include <initializer_list>
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& other) {
    return a.size() == other.size();
}