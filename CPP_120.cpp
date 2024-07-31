#include <vector>
#include <algorithm>
#include <cassert>

bool issame(int a, int b) {
    return a == b;
}

bool maximum(const std::vector<int>& vec, int val) {
    return (*std::max_element(vec.begin(), vec.end()) == val);
}

int main() {
    assert(maximum(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, 0));
    return 0;
}