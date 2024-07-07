```cpp
#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::string& a) {
    return (a.size() % 2 == 1);
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
        [](const string& a){ return !issame(a); });
    lst.erase(unique(lst.begin(), it), lst.end());
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b){ if (a.size() != b.size()) return a.size() < b.size(); else return a < b; });
    return lst;
}