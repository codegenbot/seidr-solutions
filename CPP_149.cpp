#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int sorted_list_sum(const std::vector<std::string>& lst) {
    std::vector<std::string> sorted_lst(lst);
    
    std::sort(sorted_lst.begin(), sorted_lst.end(), [](const std::string& a, const std::string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });

    int sum = 0;
    for (const std::string& s : sorted_lst) {
        sum += std::stoi(s);
    }

    return sum;
}