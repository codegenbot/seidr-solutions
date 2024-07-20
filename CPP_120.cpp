#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> maximum(const std::vector<int>& arr, int k) {
    std::vector<int> result;
    for (size_t i = 0; i <= arr.size() - k; ++i) {
        int max_val = *std::max_element(arr.begin() + i, arr.begin() + i + k);
        result.push_back(max_val);
    }
    return result;
}

assert(issame(std::vector<int>{3, 243, 243, 243, 0}, maximum({1, 2, 3, -23, 243, -400, 0}, 3)));