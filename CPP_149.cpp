#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool are_same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a == b);
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& input_lst) {
    std::vector<std::string> result = input_lst;
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> input_lst(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> input_lst[i];
    }

    std::vector<std::string> result = sorted_list_sum(input_lst);

    for (const auto& str : result) {
        std::cout << str << std::endl;
    }

    assert(are_same(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), std::vector<std::string>{"cc", "dd", "aaaa", "bbbb"}));

    return 0;
}