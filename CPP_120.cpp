#include <algorithm>
#include <iostream>
#include <vector>
#include <cassert>

using std::vector;

vector<int> maximum(vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    return vector<int>(arr.begin(), arr.begin() + std::min(k, (int)arr.size()));
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 0) == vector<int>());
    assert(maximum({5, 2, 8, 1, 9, 3}, 3) == vector<int>({9, 8, 5}));
    assert(maximum({-10, -5, -20, -15}, 2) == vector<int>({-5, -10}));

    return 0;
}