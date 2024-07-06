#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = unique(lst.begin(), lst.end(),
                     [&lst](const std::string& a, const std::string& b) {
                         if (a.length() % 2 == 1 && !issame(a, b)) {
                             return true;
                         }
                         return false;
                     });
    lst.erase(it, lst.end());
    
    sort(lst.begin(), lst.end(),
         [](const std::string& a, const std::string& b) {
             if (a.length() != b.length())
                 return a.length() < b.length();
             else
                 return a < b;
         });
    
    return lst;
}