#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::string& a, const std::string& b) {
    return a.length() == b.length();
}

int sorted_list_sum(const std::vector<std::string>& lst) {
    int sum = 0;
    for (const std::string& s : lst) {
        sum += std::stoi(s);
    }
    return sum;
}

std::vector<std::string> main(std::vector<std::string> lst) {
    lst.erase(std::remove_if(lst.begin(), lst.end(), [](const std::string& s) { return s.length() % 2 != 0; }), lst.end());
    std::sort(lst.begin(), lst.end(), [](const std::string& a, const std::string& b) {
        if (issame(a, b)) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}