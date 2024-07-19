#include <vector>
#include <algorithm>
#include <cassert>

void sort_array(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
}

bool issame(std::vector<int> a, std::vector<int> b) {
    sort_array(a);
    sort_array(b);

    return a == b;
}

int main() {
    std::vector<int> arr = {2, 4, 8, 16, 32};
    sort_array(arr);
    assert(issame(arr, {2, 4, 8, 16, 32}));

    return 0;
}