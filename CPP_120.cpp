#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

std::vector<int> maximum(const std::vector<int>& arr, int k) {
    std::vector<int> result;
    for (size_t i = 0; i <= arr.size() - k; ++i) {
        int max_val = *std::max_element(arr.begin() + i, arr.begin() + i + k);
        result.push_back(max_val);
    }
    return result;
}