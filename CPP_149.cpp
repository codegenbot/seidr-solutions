#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> input) {
    std::sort(input.begin(), input.end());
    return input;
}