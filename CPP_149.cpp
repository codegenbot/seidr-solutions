#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::string sorted_list_sum(std::vector<std::string> strings) {
    std::sort(strings.begin(), strings.end());
    std::string result;
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}

bool issame(std::string str1, std::string str2) {
    return str1 == str2;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), sorted_list_sum({"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}