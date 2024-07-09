#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){}

std::vector<int> maximum(std::vector<int> arr, int k){
    std::vector<int> res(k);
    auto it = partial_sort_copy(arr.begin(), arr.end(), res.begin(), res.begin()+k, greater<int>());
    return std::vector<int>(res.begin(), it);
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 4) , {0, 1, 2, 3})); // test your function here
}