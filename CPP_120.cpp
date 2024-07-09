#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k){
    std::vector<int> res(k);
    auto mid = arr.begin();
    std::partial_sort(arr.begin(), arr.begin()+k, arr.end(), std::greater<int>());
    for(int i=0; i<k; i++){
        res[i] = *(mid+i);
    }
    return res;
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 3) == std::vector<int>({243, 3, 2})); 
}