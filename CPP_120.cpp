#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k){
    std::vector<int> res(k);
    auto end = arr.begin() + min((long long)arr.size(), k);
    std::partial_sort(arr.begin(), end, arr.end(), std::greater<int>());
    std::copy(arr.begin(), end, res.begin());
    return res;
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 3) == vector<int>({243, 3, 2})); 
    return 0;
}