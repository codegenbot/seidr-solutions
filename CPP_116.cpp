#include <vector>
#include <algorithm>
#include <cassert>

void sort_array(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> a_copy = a;
    std::vector<int> b_copy = b;

    sort_array(a_copy);
    sort_array(b_copy);

    return a_copy == b_copy;
}

int main() {
    assert(issame({2, 4, 8, 16, 32}, {2, 4, 8, 16, 32}));

    return 0;
}