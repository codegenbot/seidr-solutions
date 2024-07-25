#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(const std::vector<int>& arr, int n) {
    for(int i = 0; i < n; i++){
        auto it = std::max_element(arr.begin(), arr.end());
        arr.erase(it);
    }
    return arr;
}

int main() {
    std::vector<int> result = maximum({1, 2, 3, -23, 243, -400, 0}, 7);
    for(int i : result) {
        std::cout << i << " ";
    }
    return 0;
}