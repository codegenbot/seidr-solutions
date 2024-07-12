```cpp
#include <initializer_list>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

std::tuple<bool, bool> issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return std::tie(a == b, a.size() == b.size());
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    auto it = std::remove_if(lst.begin(), lst.end(),
                              [](const auto& s) { return s.length() % 2 != 0; }),
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
    bool same = std::get<0>(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    assert(same);
    std::cout << "Result: ";
    for (const auto& str : sorted_list_sum({"aaaa", "bbbb", "dd", "cc"})) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}