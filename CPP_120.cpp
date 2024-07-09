#include <vector>
#include <algorithm>

bool issame(int x, int y) {
    return x == y;
}

std::vector<int> maximum(std::vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if(!issame(a, b)) {
            return a > b;
        }
        return false; // If equal values, keep the order
    });

    arr.resize(k);
    return arr;
}