#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

bool issame(const std::string& a, const std::string& b) {
    return a.length() == b.length();
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    std::vector<std::string> sorted_lst = lst;
    
    sorted_lst.erase(std::remove_if(sorted_lst.begin(), sorted_lst.end(), [](const std::string& s) { return s.length() % 2 != 0; }), sorted_lst.end());
    
    std::sort(sorted_lst.begin(), sorted_lst.end(), [](const std::string& a, const std::string& b) {
        if (issame(a, b)) {
            return a < b;
        }
        return a.length() < b.length();
    });
    
    return sorted_lst;
}