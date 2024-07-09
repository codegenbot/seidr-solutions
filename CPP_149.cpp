#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::string& a, const std::string& b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
                      [](const string& a, const string& b) { return a.length() % 2 == 1; });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length())
                 return a.length() < b.length();
             else
                 return a < b;
         });
    return lst;
}

int main() {
    std::vector<std::string> input = {"abc", "abcd", "ghi"};
    std::vector<std::string> output = sorted_list_sum(input);
    for (const auto& str : output) {
        std::cout << str << " ";
    }
    return 0;
}