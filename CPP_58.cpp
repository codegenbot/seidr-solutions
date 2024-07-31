#include <algorithm>
#include <vector>
#include <iostream>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    std::vector<int> result;
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    
    return result.empty();
}

int main() {
    assert(issame({4, 3, 2, 8}, {}));
    return 0;
}