#include <algorithm>
#include <iostream>
#include <vector>
#include <cassert>

using std::vector;

vector<int> maximum(vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    return vector<int>(arr.begin(), arr.begin() + std::min(k, static_cast<int>(arr.size())));
}