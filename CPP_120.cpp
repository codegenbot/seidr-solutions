#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (!issame({a}, {b})) {
            return a > b;
        }
        return false; // If equal values, keep the order
    });

    arr.resize(k);
    return arr;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), std::vector<int>{}));
    return 0;
}