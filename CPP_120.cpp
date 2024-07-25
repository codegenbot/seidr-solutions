#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> maximum(std::vector<int> arr, int k) {
    for(int i = 0; i < k; i++){
        auto it = std::max_element(arr.begin(), arr.end());
        arr.erase(it);
    }
    return arr;
}

int main() {
    std::vector<int> result = maximum({1, 2, 3, -23, 243, -400, 0}, 7);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}