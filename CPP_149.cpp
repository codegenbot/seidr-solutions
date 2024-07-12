#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

bool issameHelper(const std::vector<std::string>& a) {
    return a == {{"cc","dd","aaaa","bbbb"}};
}

std::vector<std::string> sortedListSum(std::vector<std::string> lst) {
    auto it = std::stable_partition(lst.begin(), lst.end(),
                                     [&](const auto& s) { return !s.length() % 2; }),
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

int mainFunction() {
    std::cout << "Result: ";
    for (const auto& str : sortedListSum({"aaaa", "bbbb", "dd", "cc"})) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
    if (!issameHelper(sortedListSum({{"aaaa", "bbbb", "dd", "cc"}})))
        return 1;
    return 0;
}