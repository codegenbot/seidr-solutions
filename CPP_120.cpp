#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

std::vector<int> maximum(std::vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // Add your implementation here
    return a == b;
}

assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));