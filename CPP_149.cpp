#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    return a.length() == b.length() && a == b;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    std::vector<std::string> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end(), [](const std::string& a, const std::string& b) {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        } else {
            return a < b;
        }
    });
    return sorted_lst;
}

int main() {
    std::vector<std::string> lst = {"apple", "banana", "orange", "kiwi", "grape"};
    
    lst.erase(std::remove_if(lst.begin(), lst.end(), [](const std::string& s) { return s.length() % 2 != 0; }), lst.end());
    
    lst = sorted_list_sum(lst);
    
    return 0;
}