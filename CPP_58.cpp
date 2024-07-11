#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <set>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> a_temp = a;
    std::vector<int> b_temp = b;
    std::sort(a_temp.begin(), a_temp.end());
    std::sort(b_temp.begin(), b_temp.end());
    std::vector<int> result;
    std::set_intersection(a_temp.begin(), a_temp.end(), b_temp.begin(), b_temp.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result.empty();
}

int main() {
    assert(issame({4, 3, 2, 8}, {}) == false);
    return 0;
}