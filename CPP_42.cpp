
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::std::vector<int> a, std::std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::std::vector<int> incr_list(std::std::vector<int> input) {
    for (int& num : input) {
        num++;
    }
    return input;
}