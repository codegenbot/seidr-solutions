#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    const std::vector<int> tempList2 = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> tempList2_modified = incr_list(tempList2);
    assert(issame(tempList2_modified, std::vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}