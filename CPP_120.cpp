#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k);

int main() {
    std::vector<int> input = {1, 2, 3, -23, 243, -400, 0};
    int k = 0;
    std::vector<int> result = maximum(input, k);
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    std::vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}