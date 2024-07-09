#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    return a.length() % 2 == 0 && b.length() % 2 == 0;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::unique(lst.begin(), lst.end(), [](const std::string& a, const std::string& b) { return issame(a, b); });
    lst.erase(it, lst.end());
    
    std::sort(lst.begin(), lst.end(),
         [](const std::string& a, const std::string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    
    return lst;
}