#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(const std::string& a, const std::string& b) {
    if (a.length() != b.length())
        return false;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = unique(lst.begin(), lst.end(),
                      [](const std::string& a, const std::string& b) { return a.length() % 2 == 1; });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
         [](const std::string& a, const std::string& b) {
             if (a.length() != b.length())
                 return a.length() < b.length();
             else
                 return a < b;
         });
    return lst;
}

int main() {
    std::vector<std::string> input = {"apple", "banana", "cherry"};
    std::vector<std::string> output = sorted_list_sum(input);
    for (const auto& str : output) {
        std::cout << str << " ";
    }
    return 0;
}