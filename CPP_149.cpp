#include <vector>
#include <algorithm>
#include <string>

bool isSame(const std::string& a, const std::string& b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = unique(lst.begin(), lst.end(),
                      [](const string& a, const string& b) { return abs(stoi(a)) + abs(stoi(b)) % 2; });
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