#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k){
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}