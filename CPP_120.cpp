#include <vector>
#include <algorithm>
#include <cassert>

bool issame(int a, int b) {
    return a == b;
}

int main() {
    std::vector<int> vec = {1, 2, 3, -23, 243, -400, 0};
    assert(issame(*std::max_element(vec.begin(), vec.end()), 0));
    return 0;
}