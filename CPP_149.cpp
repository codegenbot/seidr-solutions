#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    return a.length() == b.length();
}

int sorted_list_sum(std::vector<std::string>& lst) {
    lst.erase(std::remove_if(lst.begin(), lst.end(), [](const std::string& s) { return s.length() % 2 != 0; }), lst.end());
    std::sort(lst.begin(), lst.end(), [](const std::string& a, const std::string& b) {
        if (issame(a, b)) {
            return a < b;
        }
        return a.length() < b.length();
    });

    int sum = 0;
    for (const auto& str : lst) {
        sum += str.length();
    }
    return sum;
}