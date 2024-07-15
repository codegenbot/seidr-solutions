#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    lst.erase(std::remove_if(lst.begin(), lst.end(), [](const std::string& s) { return s.length() % 2 != 0; }), lst.end());
    std::sort(lst.begin(), lst.end(), [](const std::string& a, const std::string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

int main() {
    std::vector<std::string> input_list = {"apple", "banana", "pear", "kiwi", "mango"};
    std::vector<std::string> result = sorted_list_sum(input_list);

    for (const auto& elem : result) {
        std::cout << elem << " ";
    }

    return 0;
}