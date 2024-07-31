#include <vector>
#include <algorithm>
#include <cassert>

bool issame(int a, int b) {
    return a == b;
}

bool issame(const std::vector<int>& v, int b) {
    return *std::max_element(v.begin(), v.end()) == b;
}

int main() {
    assert(issame(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, 0));
    return 0;
}