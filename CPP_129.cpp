#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> minPath(const std::vector<std::pair<int, int>>& pairs, int num) {
    std::vector<int> result;
    for (const auto& p : pairs) {
        result.push_back(p.first + p.second + num);
    }
    return result;
}

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 3), std::vector<int>{7, 10}));
    
    return 0;
}