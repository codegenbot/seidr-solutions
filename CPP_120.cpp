#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> maximum(const std::vector<int>& arr, int k){
    std::vector<int> arrCopy = arr;
    std::sort(arrCopy.begin(), arrCopy.end(), std::greater<int>());
    arrCopy.resize(k);
    return arrCopy;
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));

    return 0;
}