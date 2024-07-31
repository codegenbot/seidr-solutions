#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> fixCode(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}

int main() {
    std::vector<int> arr = {4, 2, 7, 1, 5};
    assert(issame(std::max_element(arr.begin(), arr.end()), std::vector<int>{}));
    return 0;
}