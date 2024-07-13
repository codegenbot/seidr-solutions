#include <algorithm>
#include <vector>
#include <string>

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::unique(lst.begin(), lst.end(),
        [](const std::string& a, const std::string& b) { return (a.length() % 2 == 1); });
    std::vector<std::string> result(it, lst.end());
    std::sort(result.begin(), result.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() != b.length())
                return a.length() < b.length();
            else
                return a < b;
        });
    return result;
}