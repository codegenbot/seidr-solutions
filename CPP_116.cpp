#include <vector>
#include <algorithm>
#include <cassert>

void sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
}

bool issame(std::vector<int> a, std::vector<int> b) {
    sort_array(a);
    sort_array(b);

    return a == b;
}

int main() {
    assert(issame({2,4,8,16,32}, {2, 4, 8, 16, 32}));

    return 0;
}