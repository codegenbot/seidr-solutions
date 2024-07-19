#include <algorithm>
#include <iostream>
#include <vector>
#include <cassert>

using std::vector;

vector<int> maximum(vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    return vector<int>(arr.begin(), arr.begin() + std::max(k, 0));
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 0) == vector<int());

    return 0;
}