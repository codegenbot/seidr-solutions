```cpp
#include <initializer_list>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    auto it = unique(lst.begin(), lst.end(),
                      [](const std::string& a, const std::string& b){ return a.length() % 2 == 1; });
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
    bool same = issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"});
    assert(same);
    std::cout << "Result: ";
    for (const auto& str : sorted_list_sum({"aaaa", "bbbb", "dd", "cc"})) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}