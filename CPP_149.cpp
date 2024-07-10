#include <vector>
#include <algorithm>
#include <string>

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& list) {
    std::sort(list.begin(), list.end());
    int sum = 0;
    for (const auto& str : list) {
        sum += str.length();
    }
    return {std::to_string(sum)}; 
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}