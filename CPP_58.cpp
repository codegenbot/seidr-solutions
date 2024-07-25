#include <algorithm>
#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    std::vector<int> result;
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert(issame({4, 3, 2, 8}, {}) == std::vector<int>());
    // Add more test cases if needed

    return 0;
}