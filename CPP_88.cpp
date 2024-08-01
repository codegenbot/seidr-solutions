#include <vector>
#include <algorithm>
#include <cassert>

void sortVector(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end());
}

bool issame(std::vector<int> a, std::vector<int> b) {
    sortVector(a);
    sortVector(b);
    return a == b;
}

int main() {
    assert(issame({21, 14, 23, 11}, {23, 21, 14, 11}));
    return 0;
}