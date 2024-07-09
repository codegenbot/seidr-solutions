#include <vector>
#include <algorithm>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = unique(lst.begin(), lst.end(),
                      [](const std::string& a, const std::string& b) { return (int)a.length() % 2 == 1; });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
         [](const std::string& a, const std::string& b) {
             if ((int)a.length() != (int)b.length())
                 return (int)a.length() < (int)b.length();
             else
                 return a < b;
         });
    return lst;
}