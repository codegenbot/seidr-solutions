#include <vector>
#include <algorithm>
#include <string>
#include <initializer_list>

std::vector<std::string> sorted_list_sum(std::vector<std::string> list) {
    std::sort(list.begin(), list.end());
    int sum = 0;
    for (const auto& str : list) {
        sum += str.length();
    }
    return list; 
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}