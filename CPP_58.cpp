#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <set>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sorted_a = a;
    std::vector<int> sorted_b = b;
    std::sort(sorted_a.begin(), sorted_a.end());
    std::sort(sorted_b.begin(), sorted_b.end());
    
    std::vector<int> result;
    std::set_intersection(sorted_a.begin(), sorted_a.end(), sorted_b.begin(), sorted_b.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    
    return result.empty();
}

int main() {
    assert(issame({4, 3, 2, 8}, {}) == true);
    
    return 0;
}