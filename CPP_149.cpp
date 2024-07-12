```cpp
#include <initializer_list>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::unique(lst.begin(), lst.end(),
                          [](const std::string& a, const std::string& b){ return a.length() % 2 == 1; });
    lst.erase(it, lst.end());
    std::sort(lst.begin(), lst.end(),
              [](const std::string& a, const std::string& b) {
                  if (a.length() != b.length())
                      return a.length() < b.length();
                  else
                      return a < b;
              });
    return lst;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    std::vector<std::string> lst = {"aaaa", "bbbb", "dd", "cc"};
    if (!issame(sorted_list_sum(lst), {"cc", "dd", "aaaa", "bbbb"})) {
        std::cerr << "Test failed. Expected: {'cc', 'dd', 'aaaa', 'bbbb'}, but got: " << sorted_list_sum(lst).size() << " elements.\n";
    }
}