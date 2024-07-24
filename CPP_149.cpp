#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    int countA = 0, countB = 0;
    for (char c : a) if (c == '1') countA++;
    for (char c : b) if (c == '1') countB++;

    return countA == countB;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::unique(lst.begin(), lst.end(),
                          [](const std::string& a, const std::string& b) {
                              return !issame(a, b);
                          });
    lst.erase(it, lst.end());

    std::sort(lst.begin(), lst.end(),
              [](const std::string& a, const std::string& b) {
                  if (a.size() < b.size()) return true;
                  else if (a.size() > b.size()) return false;
                  else return a < b;
              });

    return lst;
}