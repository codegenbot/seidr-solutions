#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

bool issame(const std::string& a, const std::string& b) {
    return a.length() == b.length();
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    std::vector<std::string> sorted_list = lst;
    
    sorted_list.erase(std::remove_if(sorted_list.begin(), sorted_list.end(), [](const std::string& s) {
        return s.length() % 2 != 0;
    }), sorted_list.end());
    
    std::sort(sorted_list.begin(), sorted_list.end(), [](const std::string& a, const std::string& b) {
        if (issame(a, b)) {
            return a < b;
        }
        return a.length() < b.length();
    });

    return sorted_list;
}