#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<std::string> sorted_list_sum(std::vector<std::string> input) {
    return input;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), sorted_list_sum({"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}