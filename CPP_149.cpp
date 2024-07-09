#include <vector>
#include <algorithm>
#include <unordered>

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::unique(lst.begin(), lst.end(),
        [](const string& a, const string& b) { return (a.size() % 2 == 1 && b.size() % 2 == 0) || (a.size() % 2 == 0 && b.size() % 2 == 1); });
    lst.erase(it, lst.end());
    std::sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.size() != b.size()) return a.size() < b.size();
            return a < b;
        });
    return lst;