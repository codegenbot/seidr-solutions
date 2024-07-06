#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    return a.length() % 2 && !b.length() % 2 || (!a.length() % 2 && b.length() % 2);
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::unique(lst.begin(), lst.end(), issame);
    lst.erase(it, lst.end());
    std::sort(lst.begin(), lst.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length())
                return a < b;
            else
                return a.length() < b.length();
        });
    return lst;
}