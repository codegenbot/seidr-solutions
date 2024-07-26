#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

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

int main() {
    std::vector<std::string> lst = {"123", "45", "6789", "12", "345"};
    
    lst.erase(std::remove_if(lst.begin(), lst.end(), [](const std::string& s) { return s.length() % 2 != 0; }), lst.end());
    
    std::sort(lst.begin(), lst.end(), [](const std::string& a, const std::string& b) {
        if (issame(a, b)) {
            return a < b;
        }
        return a.length() < b.length();
    });
    
    int sum = sorted_list_sum(lst);
    
    return 0;
}