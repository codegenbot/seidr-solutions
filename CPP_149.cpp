#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    return a.length() == b.length();
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    std::vector<std::string> result = lst;
    result.erase(std::remove_if(result.begin(), result.end(), [](const std::string& s) { return s.length() % 2 != 0; }), result.end());
    std::sort(result.begin(), result.end(), [](const std::string& a, const std::string& b) {
        if (!issame(a, b)) {
            return a.length() < b.length();
        } else {
            return a < b;
        }
    });
    return result;
}