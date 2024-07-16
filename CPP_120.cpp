#include <vector>
#include <algorithm>
#include <functional>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k){
    sort(arr.begin(), arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}