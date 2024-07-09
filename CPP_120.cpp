#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> getMaximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for(int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(std::remove(arr.begin(), arr.end(), *it), arr.end());
    }
    return result;
}

int main2() {
    std::vector<int> test = getMaximum({1, 2, 3, -23, 243, -400, 0}, 3);
    for (int i : test) {
        std::cout << i << " ";
    }
    return 0;
}