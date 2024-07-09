#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(int x, int y) {
    return x == y;
}

std::vector<int> maximum(const std::vector<int>& arr, int k) {
    std::vector<int> arrCopy = arr;
    std::sort(arrCopy.begin(), arrCopy.end(), [](int a, int b) {
        if (a != b) {
            return a > b;
        }
        return false; // If equal values, keep the order
    });

    arrCopy.resize(k);
    return arrCopy;
}

int main() {
    assert(issame(1, 1));
    assert(!issame(1, 2));

    std::vector<int> result = maximum({1, 2, 3, -23, 243, -400, 0}, 0);
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}