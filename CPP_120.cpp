#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> maximum(const std::vector<int>& arr, int k){
    std::vector<int> temp_arr = arr;
    std::sort(temp_arr.begin(), temp_arr.end(), std::greater<int>());
    temp_arr.resize(k);
    return temp_arr;
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    
    return 0;
}