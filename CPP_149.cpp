#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    auto it = unique(lst.begin(), lst.end(), 
                      [](const string& a, const string& b) { return (stoi(a) + stoi(b)) % 2 == 1; });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length())
                 return a.length() < b.length();
             else
                 return a < b;
         });
    return lst;
}