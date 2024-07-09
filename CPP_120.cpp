#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){}

std::vector<int> maximum(std::vector<int> arr, int k){
    std::vector<int> res(k);
    std::partial_sort(arr.begin(), arr.begin()+k, arr.end(), std::greater<int>());
    for(int i = 0; i < k; i++){
        res[i] = arr[i];
    }
    return res;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 4) , {0, 2, 3, 1})); // test your function here
}