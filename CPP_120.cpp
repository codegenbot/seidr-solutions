#include <vector>
#include <algorithm>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::partial_sort(arr.begin(), arr.begin() + k, arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}

int main() {
    std::vector<int> result = maximum({1, 2, 3, -23, 243, -400, 0}, 3);
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}