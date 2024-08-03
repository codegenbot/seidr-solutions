#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    assert(issame(maximum({5, 8, 1, 3, 4, 2}, 3), {8, 5, 4});
    assert(issame(maximum({-10, -2, 0, 6, -4, 7, -1}, 4), {7, 6, 0, -1});
    assert(issame(maximum({100}, 5), {100, 0, 0, 0, 0});
    return 0;
}