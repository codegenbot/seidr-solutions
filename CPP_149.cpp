#include <initializer_list>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

bool areSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> sortedListSum(const std::vector<std::string>& lst) {
    auto it = std::stable_partition(lst.begin(), lst.end(),
                                     [&](auto& s) { return !s.length() % 2; }),
        end = lst.erase(it, lst.end());
    std::stable_sort(std::next(lst.begin()), lst.end(),
                      [](const auto& a, const auto& b) {
                          if (a.length() != b.length())
                              return a.length() < b.length();
                          else
                              return a < b;
                      });
    return lst;
}

int main() {
    bool same = areSame(sortedListSum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"});
    assert(same);
    std::cout << "Result: ";
    for (const auto& str : sortedListSum({"aaaa", "bbbb", "dd", "cc"})) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}