#include <vector>
#include <algorithm>
#include <functional>

bool issame(const std::string& a, const std::string& b) {
    return a.length() % 2 == 0 && b.length() % 2 == 0;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
                     [](const std::string& a, const std::string& b){ return a.length() % 2 == 0 && b.length() % 2 != 0 || a.length() % 2 != 0 && b.length() % 2 == 0; });
    lst.erase(it, lst.end());
    
    sort(lst.begin(), lst.end(),
         [](const std::string& a, const std::string& b) {
             if (a.size() < b.size()) return true;
             else if (a.size() > b.size()) return false;
             else return a < b;
         });
    
    return lst;
}