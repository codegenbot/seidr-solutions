#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

bool issame(const std::string& a, const std::string& b) {
    return a.length() == b.length();
}

int sorted_list_sum(const std::vector<std::string>& lst) {
    std::vector<std::string> sorted_lst = lst;
    
    sorted_lst.erase(std::remove_if(sorted_lst.begin(), sorted_lst.end(), [](const std::string& s) { return s.length() % 2 != 0; }), sorted_lst.end());
    
    std::sort(sorted_lst.begin(), sorted_lst.end(), [](const std::string& a, const std::string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    
    return std::accumulate(sorted_lst.begin(), sorted_lst.end(), 0, [](int sum, const std::string& s) { return sum + s.length(); });
}