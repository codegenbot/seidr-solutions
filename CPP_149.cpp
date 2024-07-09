#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    std::vector<std::string> sorted_lst = lst;
    sorted_lst.erase(std::remove_if(sorted_lst.begin(), sorted_lst.end(), [](const std::string& s) { return s.length() % 2 != 0; }), sorted_lst.end());
    std::sort(sorted_lst.begin(), sorted_lst.end(), [](const std::string& a, const std::string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return sorted_lst;
}

int main() {
    std::vector<std::string> input_lst = {"apple", "banana", "pear", "kiwi", "orange"};
    std::vector<std::string> sorted_result = sorted_list_sum(input_lst);

    for (const std::string& s : sorted_result) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    return 0;
}