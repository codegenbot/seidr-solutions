#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::vector<int> arr1 = {21, 14, 23, 11};
    std::vector<int> arr2 = {23, 21, 14, 11};
    assert(issame(arr1, arr2));
    return 0;
}