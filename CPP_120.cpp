#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for(int i = 0; i < k; i++) {
        int maxVal = *std::max_element(arr.begin(), arr.end());
        result.push_back(maxVal);
        auto it = arr.begin();
        while(it != arr.end() && *it == maxVal) {
            it = arr.erase(it);
        }
    }
    return result;
}

int main() {
    std::vector<int> test = maximum({1, 2, 3, -23, 243, -400, 0}, 3);
    for (int i : test) {
        std::cout << i << " ";
    }
    return 0;
}