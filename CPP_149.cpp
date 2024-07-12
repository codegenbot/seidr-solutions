#include <initializer_list>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

bool issame(const std::initializer_list<std::string>& a) {
    return a.size() == 1 && *a.begin().size() > 0;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    auto oddLengthStrings = lst | std::views::filter([](const std::string& s) { return s.length() % 2 == 1; });
    lst.erase(std::remove_if(lst.begin(), lst.end(),
                              [](const std::string& s) { return s.length() % 2 == 1; }),
              lst.end());
    std::stable_partition(lst.begin(), lst.end(),
                           [](const std::string& s) { return s.length() % 2 == 1; });
    std::sort(std::next(lst.begin()), lst.end(),
              [](const std::string& a, const std::string& b) {
                  if (a.length() != b.length())
                      return a.length() < b.length();
                  else
                      return a < b;
              });
    return lst;
}

int main() {
    bool same = issame({"aaaa", "bbbb", "dd", "cc"});
    assert(same);
    std::cout << "Result: ";
    for (const auto& str : sorted_list_sum({"aaaa", "bbbb", "dd", "cc"})) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}