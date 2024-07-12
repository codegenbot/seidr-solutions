#include <algorithm>
#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> solve(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

int main() {
    std::vector<int> result = solve({5, 3, 5, 2, 3, 3, 9, 0, 123});
    std::vector<int> expected = {0, 2, 3, 5, 9, 123};
    
    assert(result == expected);
    
    return 0;
}