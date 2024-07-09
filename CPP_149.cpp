#include <iostream>
#include <vector>
#include <algorithm>

bool sorted_list_sum(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::vector<std::string> lst = a;
    lst.insert(lst.end(), b.begin(), b.end());
    std::erase(std::remove_if(lst.begin(), lst.end(), [](const std::string& s) { return s.length() % 2 != 0; }), lst.end());
    std::sort(lst.begin(), lst.end(), [](const std::string& a, const std::string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

int main() {
    // Usage example
    std::vector<std::string> a = {"apple", "banana", "orange"};
    std::vector<std::string> b = {"pear", "kiwi", "grapefruit"};
    std::vector<std::string> result = sorted_list_sum(a, b);
    for (const auto& s : result) {
        std::cout << s << " ";
    }

    return 0;
}