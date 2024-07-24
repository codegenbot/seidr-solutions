```cpp
#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    return (a.size() % 2 == 0 && b.size() % 2 != 0) || 
           (a.size() % 2 != 0 && b.size() % 2 == 0);
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::unique(lst.begin(), lst.end(), issame);
    lst.erase(it, lst.end());
    
    std::sort(lst.begin(), lst.end(),
              [](const std::string& a, const std::string& b) {
                  if (a.size() < b.size()) return true;
                  else if (a.size() > b.size()) return false;
                  else return a < b;
              });
    
    return lst;
}