```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> test = maximum({1, 2, 3, -23, 243, -400, 0}, 3);
    for (int i : test) {
        std::cout << i << " ";
    }
    return 0;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    while(arr.size() > 0 && k > 0) {
        auto it = *std::max_element(arr.begin(), arr.end());
        result.push_back(it);
        arr.erase(std::remove(arr.begin(), arr.end(), it), arr.end());
        k--;
    }
    return result;
}