```cpp
#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = remove_if(lst.begin(), lst.end(), [](const std::string& s){ return s.length() % 2; });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(), 
        [](const std::string& a, const std::string& b){
            if(a.length() != b.length()) {
                return a.length() < b.length();
            } else {
                return a < b;
            }
        });
    return lst;
}