#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> sort_even_length_strings(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].length() % 2 == 0) {
            result.push_back(lst[i]);
        }
    }
    std::sort(result.begin(), result.end(), [](const std::string& a, const std::string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

int main() {
    std::vector<std::string> input = { "aaaa", "bbbb", "dd", "cc" };
    std::vector<std::string> expected_output = { "cc", "dd", "aaaa", "bbbb" };

    std::vector<std::string> sorted_list_sum = sort_even_length_strings(input);

    std::cout << std::boolalpha << issame(sorted_list_sum, expected_output) << std::endl;

    return 0;
}